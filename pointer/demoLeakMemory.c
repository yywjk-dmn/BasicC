#include <stdio.h>
#include <stdlib.h>

 /* 内存泄漏 */
#define BUFFER_ZISE 10
int main()
{
#if 0 
    /* 什么情况下会导致内存的泄漏 */
    // case 1:野指针

    int a;
    printf("a :%d\n", a);

    int array[BUFFER_ZISE];
    for (int idx = 0; idx < sizeof(array); idx++)
    {
        printf("%d\t", array[idx]);
    }
    printf("\n");
#endif

#if 1
    char *p;
    printf("\n");
#endif
    //caes 2:
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_ZISE);
    
    if (!ptr)
    {
        /* todo... */
        /* 状态码 */
        return -1;
    }
    /* 使用malloc分配的空间， 里面的数据是脏数据 */
    memset(ptr, 0, sizeof(char) * BUFFER_ZISE);
    //strcpy(ptr, "hello world"); 空间不够打印全部的，但是强占了地址去放数据 所以strcpy这个字符串函数很不安全，用strncpy
    /* 使用安全 */
    strncpy(ptr, "hello world", BUFFER_ZISE - 1);    //后面要有结束符
    printf("ptr:%c\n", *ptr);
    /*  */
#if 0 
    /* 释放函数这么写 */
    if (ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }
#endif



    return 0;
}
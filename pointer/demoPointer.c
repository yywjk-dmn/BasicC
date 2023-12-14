#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_ZISE 20

/* 指针 */
int main()
{
#if 0
/* 指针怎么定义 */
/* 基础数据类型 */
/* 代码规范（Tips）:定义（任意类型）变量记得初始化 */
    int a = 0;
    long b = 0;

    /* 指针的定义 */
    int *p = NULL;
#endif

#if 0
    /* 指针的使用:指针内部存放的是某变量的地址 */
    int a = 5;
    int *p = &a;

    printf("a:%d\n", a);
    printf("&a:%p\n", &a);
    /* 非常重要 */
    printf("*(&a):%d\n", *(&a));

    printf("*p:%d\n", *p);
    printf("p:%p\n", p);
    printf("&p:%p\n", &p);
#endif

#if 0
    /* 这个地方不对，*/
    int *ptr = &p;
    printf("ptr:%p\n", ptr);


    int **ptr = &p;
    printf("ptr:%p\n", ptr);
    printf("*ptr:%p\n",*ptr);
    /* 非常非常重要 */
    printf("*(*ptr): %d\n", *(*ptr));

#endif

#if 0
    /* 指针的特性1： */
    /* 指针占用的内存大小是8个字节（64位），32位是4个字节 */
    int a = 10;
    int len = sizeof(a);
    printf("len:%d\n", len);

    char p = 97;
    len = sizeof(p);
    printf("len:%d\n", len);

    char *ptr = &p;
    printf("%c\t%d\n", *ptr, *ptr);
    len = sizeof(ptr);
    printf("%d\n", len);

    int *ptrInt = &a;
    printf("*(&a): %d\n", *(&a));
    printf("%d\n", *ptrInt);

    len = sizeof(ptrInt);
    printf("len: %d\n", len);


#endif

#if 0
    /* 指针的特性2：指针和字符串 */
    /* 字符串是区别于字符型数组的 */
    char * ptr = "hello world";
    int len = sizeof(ptr);
    printf("%d\n", len);

    /* 怎么判断一个字符串长度 */
    int length = strlen(ptr);
    printf("length:%d\n", length);

    /* 字符数组的赋值 */
    char name[BUFFER_ZISE] = { 0 };
    //name = "zhangsan";
    strcpy(name, "zhangsan");
    printf("name: %s\n", name);

    /* 给字符串赋值 堆空间 */
    char *ptr2 = NULL;
    //strcpy(ptr2, "zhangsan");
    ptr2 = "zhangsan";
    printf("%s\n", ptr2);
#endif

#if 1

    /* 堆空间 */
    /* void * 是一个指针，这个指针被称为万能指针 */
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_ZISE);
    strcpy(ptr, "zhangsan");
    printf("ptr:%s\n", ptr);

#endif
    return 0;
}
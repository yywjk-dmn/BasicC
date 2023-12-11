#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 32
int main()
{
#if 0
    /* 字符数组 */
    char array[BUFFER_SIZE];
    /* 数组初始化 */
    memset(array, 0, sizeof(array));

    int len = sizeof(array);
    printf("len: %d\n", len);

    /*
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        array[idx] = idx;
    }
    */
#endif

#if 0
    char array[BUFFER_SIZE] = "hello world!";
    int len = sizeof(array);
    printf("len: %d, array:%s\n", len, array);

#endif

#if 0
    /* 字符串（字符数组）*/
    char array[BUFFER_SIZE] = "hello world";
    /* 第一个 strlen */
    int len = strlen(array);
    printf("len:%d\n",len);

    /* 第二个 strcpy */
    char name[BUFFER_SIZE];
    memset(name, 0, sizeof(name));
    strcpy(name, "zahngsan");
    printf("name:%s\n",name);

    /* 第三个 strcat */
    strcat(name, " is a boy");
    printf("name:%s\n",name);

    /* 第四个 strcmp 用ASCII值比较 */
    char name2[BUFFER_SIZE] = "wangwu";
    int ret = strcmp(name, name2);
    printf("ret:%d\n",ret);

#endif

#if 1
    /* 字符串(常量)，不可更改，存放在全局(常量)区 */
    /* 指针出入 */
    char * ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);

    printf("len:%d\n",len);
    printf("size:%d\n",size);

    printf("*ptr: %c\t *(ptr+1):%c\n", *ptr, *(ptr + 1));

    *ptr = 'H';
    printf("*ptr: %c\t *(ptr+1):%c\n", *ptr, *(ptr + 1), ptr);
#endif
    return 0;
}
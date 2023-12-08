#include <stdio.h>

#define BUFFER_SIZE 10

int main()
{


#if 0

    /* 如何获取数组哟有多少个元素:数组的总长度/每个元素的长度 */
    long array[BUFFER_SIZE] = { 0 };

    int arrayLen = sizeof(array);
    printf("len:%d\n", len);

    int elementLen = sizeof(array[0]);
    printf("len:%d\n", len);

    int lenght = arrayLen / elementLen;
    printf("length:%d\n", lenght);
#endif

#if 0
    /* 字符数组 */
    /* 什么叫字符 */
    char pNum = 'a';
    printf("pNum:%c\n", pNum);

    /* 指针：只要是指针的变量，变量定义第一的需要是p开头 */
    char * ptr = "hello world ";
    printf("ptr:%s\n", ptr);

    char buffer[] = {'h','e','l','l','o','w','o','r','l','d'};
    int buflen = sizeof(buffer);
    printf("ptr:%d , buffer:%s\n",buflen, buffer);
#endif

    /* 字符串定义的两种方式 */
    /* buffer1以双引号（字符串）的方式定义 后面有一个终止符'\0' buffer2为单引号定义是字符 后面没有终止符*/
    char buffer1[] = "helloworld";
    char buffer2[] = {'h','e','l','l','o','w','o','r','l','d'};
    char buffer3[] = {'h','e','l','l','o','w','o','r','l','d'};

    int buflen1 = sizeof(buffer1);
    int buflen2 = sizeof(buffer2);
    int buflen3 = sizeof(buffer3);

    printf("buffer1:%p\t buffer2:%p\t buffer3:%p\n", buffer1, buffer2, buffer3);

    printf("buflen1:%d, buflen2:%d, buflen3:%d\n", buflen1, buflen2, buflen3);
    printf("buffer1:%s,\tbuffer2:%s, buffer3:%s\n", buffer1, buffer2, buffer3);

    return 0;
}
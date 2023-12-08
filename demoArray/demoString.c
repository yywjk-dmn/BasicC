#include <stdio.h>

/* 也是个常量 */
const int g_num = 10;
int main()
{
    char buffer1[] = "helloworld";
    buffer1[0] = 'H';
    printf("buffer1:%s buffer[0]:%c\n", buffer1, buffer1[0]);

    /* */
    char * ptr = "helloworld";
    printf("ptr[0]:%c\t*(ptr+1):%c\n", *(ptr + 0), *(ptr + 1));

    /* 为什么字符串不可以改 因为字符串是常量，也是存放在全局区 */
    ptr[0] = 'H';
    printf("ptr[0]:%c\n",ptr[0]);

    return 0;
}
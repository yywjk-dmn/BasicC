#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10

/* 一段连续的存储空间 存放的是相同的数据类型*/
int main()
{
#if 0
    /* 方法一 ：使用定义即初始化 */
    int array[BUFFER_SIZE] = {1, 2, 3};   //后面的值不写默认为0

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d]: %d\n",idx, array[idx]);
    }
    int len = sizeof(array);
    printf("len:%d\n", len);

    /* 地址 */
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);
    printf("%p\n", &array[9]);
    /* 数组的（首）地址和数组首元素的地址是一个*/

    /* 清除脏数据 */
    memset(array, 0, sizeof(array));
    printf("------------\n");
     for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d]: %d\n",idx, array[idx]);
    }
#endif

#if 1
    int array[BUFFER_SIZE];
    /* 数组的越界访问 */
    /* 判断索引的有效性 */
    printf("array[-1]:%d\n",array[-1]);
    printf("array[10]:%d\n",array[10]);

#endif
    return 0;
}
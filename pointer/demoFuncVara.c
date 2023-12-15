#include <stdio.h>
#include <string.h>


#define BUFFER_SIZE 10
#define BUFFER_OFFSET 97

/* 函数 */

#if 1
/* 函数参数 */
  /* 需求：实现两个函数的交换 */
  /* 值传递 */


/* 数组做函数参数会自动弱化为指针 */
void printArrary(int *array, int numSize)
{
    //int elementNum = sizeof(array) / sizeof(array[0]);  //求空间的大小
    for (int idx = 0;idx < numSize; idx++)
    {
        printf("array[%d] = %d\t", idx, array[idx]);
    }
    return;

}

int  swapRealDate(int *val1, int *val2)
{
    int ret = 0;
    // printf("before:val1:%d\tval2:%d\n", val1, val2);

    int tempData = *val1;     //*（&num1）
    *val1 = *val2;
    *val2 = tempData;

    // printf("after:val1:%d\tval2:%d\n", val1, val2);
    return ret;

}


void swapSurfaceDate(int val1, int val2)    //val1和val2是参数，都存放在栈区，相当于值传递
{
    printf("before:val1:%d\tval2:%d\n", val1, val2);

    int tempData = val1;
    val1 = val2;
    val2 = tempData;

    printf("after:val1:%d\tval2:%d\n", val1, val2);
}

#endif
int main()
{
    int num1 = 100;
    int num2 = 200;

#if 0
    int val1 = num1;
    int val2 = num2;

    val1 = 200;
    val2 = 666;
#endif

    //swapSurfaceDate(num1, num2);     //为什么值没有进行交换

#if 0
    int a= 5;
    int *p = &a;

    *p = 200;
    printf("a = %d\n", a);
    swapRealDate(&num1, &num2);
    printf("num1:%d, num2:%d\n", num1, num2);
#endif

    int array[BUFFER_SIZE];
    memset(array, 0, sizeof(array));
    int elementNum = sizeof(array) / sizeof(array[0]);  //求空间的大小
    printf("len:%d\n", elementNum);
    for (int idx = 0;idx < elementNum; idx++)
    {
        array[idx] = idx + BUFFER_OFFSET;
    }
    printArrary(array, elementNum);
    /* 数组名就是数组的首地址 也是数组第一个元素的首地址 */
    // for (int idx = 0;idx < elementNum; idx++)
    // {
    //     printf("array[%d] = %d\t",idx, array[idx]);

    // }
    printf("\n");

    return 0;
}
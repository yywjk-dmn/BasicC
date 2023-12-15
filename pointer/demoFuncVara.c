#include <stdio.h>
#include <string.h>




/* 函数 */

#if 1
/* 函数参数 */
  /* 需求：实现两个函数的交换 */
  /* 值传递 */

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


    int a= 5;
    int *p = &a;

    *p = 200;
    printf("a = %d\n", a);
    swapRealDate(&num1, &num2);

    
    printf("num1:%d, num2:%d\n", num1, num2);



    return 0;
}
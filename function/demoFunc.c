#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculateFunc.h"
#include "myString.h"

/* 函数参数可以没有 */
/* 函数返回值 没有就是void,如果有，就返回你想返回的数据类型（int char long short float double(内存大小占多少)） */

/* 什么叫API Application Programming Interface */

/* 函数的定义 */
#if 0
//case 1: 没有参数和返回值
void purchaseAppointThing()
{
    printf("purchaase a phone\n");
}
#endif
#if 0
//case 2:有参数， 没有返回值
/* 函数参数一定有数据类型 */
void myAddNum1(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n",sum);
}
#endif
#if 0
//case 3:有参数有返回值
int myAddNum2(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n",sum);
    return sum;
}
#endif

/* 枚举  也是一种数据类型 */
enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
    ON_NULL,
    ON_MELLOCFAIL,
};
/* 取别名 */
//typedef enum STATUS_CODE STATUS_CODE;  或者
// typedef enum STATUS_CODE
// {
//     ON_SUCCESS,
//     ON_ERROR,
//     ON_NULL,
//     ON_MELLOCFAIL,
// }STATUS_CODE;

int main()
{
    
#if 0
    // int a = 5;
    // printf("a:%d\n", a);

    /* 函数的调用 */
    purchaseAppointThing();

    int num1 = 6;
    int num2 = 7;
    /* 函数的使用 */
    myAddNum(num1, num2);


    int totalSum = myAddNum2(num1, num2);

    int transFormerPrice = 10;
    if (totalSum > transFormerPrice)
    {
        printf("get a tranformer\n");
    }
    else
    {
        printf("not get a transformer\n");
    }
#endif

#if 0
    STATUS_CODE status;
    int len = sizeof(status);
    printf("len: %d\n",len);
#endif

#if 0
    int num1 = 50;
    int num2 = 60;
    int sum = calculateAdd(num1, num2);
    printf("sum: %d\n",sum);

    int num3 = calculateMul(num1, num2);
    printf("num3:%d\n",num3);

    int amass = calculateMul(num1, num2);
    printf("amass:%d\n",amass);

    int num4 = calculateDiv(num1, num2);
    printf("num4:%d\n",num4);
#endif


    char *ptr = "hello\0world";
    int len = myStrlen(ptr);
    printf("len:%d\n", len);

    return 0;
}
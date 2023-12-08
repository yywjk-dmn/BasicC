#include <stdio.h>
#include <time.h>
#include <stdlib.h>



/* 数据类型 */

int main()
{
#if 0
    long bigValue = 0;
    int len = sizeof(bigValue);
    printf("len = %d, long = %ld\n", len, bigValue);  /* %ld用于长整数 */
    /* 变量的命名 ： 字母数字下划线 */
    int age = 6;
    /* 数据类型对应内存的存储 */
    len = sizeof(age);  /* 整型 （整数）*/
    printf("len = %d, age = %d\n", len, age);
    printf("hello world!\n");     /* %d是整形 */

    short smallValue = 1;
    len = sizeof(smallValue);
    printf("len = %d, short = %d\n", len, smallValue);

#if 0
    /* 浮点数：小数 */
    float weight = 50.5;
    len = sizeof(weight);
    printf("len: %d, weight:%f\n", len, weight);
#else
    double weight = 50.5;
    len = sizeof(weight);
    printf("len = %d, weight = %f\n", len, weight);    /* %f是小数 */
#endif

    /* 字符型 */
    char sex = 'm';
    len = sizeof(sex);
    printf("len = %d, sex = %c\n", len, sex);    /* %c是打印字符 */

#endif

#if 0
    char sex = -1;
    int len = sizeof(sex);
    printf("len = %d, sex = %c, sex = %d\n", len, sex, sex);    /* %c是打印字符 */

    char defalut_value = 137;
    len = sizeof(defalut_value);
    printf("len = %d, defalut_value = %c, defalut_value = %d\n", len, defalut_value, defalut_value);

    /* 无符号和有符号的区别 */
    unsigned char m_value = -1;     /* 数字0和字符0不一样 ASCII中 48->0 65->A 97->a */
    len = sizeof(m_value);
    printf("len = %d, m_value = %c, m_value = %d\n", len, m_value, m_value);

    /* 表达式 & 运算符 */
    int val = 3 - 2 * 5;
    printf("val = %d\n", val);

    /* 括号的优先级是最高的 */
    /* 后置++ */
    val++;
    printf("val = %d\n", val);
    val--;
    printf("val = %d\n", val);

    /* 前置++ */
    ++val;
    printf("val = %d\n", val);
    --val;
    printf("val = %d\n", val);


    val = val + 100;   /* 等价于val += 100 -= *= /= */
    printf("val = %d\n", val);
#endif

#if 0
    int m_value1 = 10;
    int discuss = m_value1 / 3;
    int remainder = m_value1 % 3;

    printf("discuss = %d\n", discuss);
    printf("remainder = %d\n", remainder);

    /* 随机数 */
    int randomVal = rand();
    printf("randomVal = %d\n",randomVal);

    /* 中奖率是25% */
    int lotteryRate = randomVal & 4;
    printf("lotteryRate = %d\n", lotteryRate);



    int a = 51 << 1;    /* 等价于5 * 2  左移等于*2 右移等于/2 */
    printf("a:%d\n",a);

    /* 或运算（有1就为1）和与（且）运算（有0就为0） */
    int val = 51;
    int orVal = val | 7;
    int addVal = val & 2;
    printf("orVal:%d\n",orVal);
    printf("addVal:%d\n",addVal);

    /* 非运算,非0的数，取非为0，0取非为1 */
    int notVal = !val;
    printf("notVal:%d\n",notVal);
#endif
#if 0
    /* 且或非，常用在条件判断中 不是单纯的进行数字的运算 && ||*/

    int condition1 = 1;
    int condition2 = 6;
    /* 或 ：一个条件成立则成立 */
    if((condition1 == 1) || (condition2 == 5))    
    {
        printf("hello world\n");
    }
    else
    {
        printf("not good!");
    }

    /* 且（与）：只要有一个条件不成立就不成立 */
    if((condition1 == 1) && (condition2 == 5))    
    {
        printf("hello world\n");
    }
    else
    {
        printf("not good!");
    }
#endif

    /* 运算符：双目运算符 & 三目运算符 */
    /* 双目运算符 */
    /* */
    int num1 = 10;
    int num2 = 30;

    /* 三目运算符:如果条件成立就执行前面的，如果条件不成立就执行后面的 */
    int num3 = (num1 > num2) ? 100 : 666;

    printf("num3:%d\n", num3);


    return 0;
}
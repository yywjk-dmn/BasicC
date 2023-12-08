#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* 状态码 */
enum STATUS_CODE
{
    REGISTER = 1,
    LOGIN,
    QUIT,
};

/* 宏定义:全部大写 */
#define COUNT_NUM 100
#define RANGE_NUM 200


int main()
{
#if 0
    //注释的类型

    /* 判断语句 */
    int budget = 5000;

    int applephone = 8999;
    int min14pro = 4399;
    int huaweiP60 = 7999;

    if (budget > applephone)
    {
        printf("get a applephone!\n");
    }
    else if (budget > min14pro)
    {
        printf("get a min14pro!\n");
    }
    else if (budget > huaweiP60)
    {
        printf("get a huawei!\n");
    }

#endif

#if 0
    int budget = 5000;
    int minbudget = 4000;
    int maxbudget = 8000;

    int applephone = 8999;
    int min14pro = 4399;
    int huaweiP60 = 6000;

    /* 两边只要有一个1，则整个条件成立 */
    /* 1 || 0 = 1 */
    if (budget > applephone || budget > min14pro)
    {
        printf("I have a phone!\n");
    }
    else 
    {
        printf("I not get a phone!\n");
    }

    /* &&两边都为1，条件成立 */
    /* 1 && 0 = 0 */
    if ((minbudget < budget) && (budget < maxbudget))
    {
        printf("I can get a phone!\n");
    }
    else 
    {
        printf("I am unhappy!\n");
    }


#endif

#if 0
    /* 注意：1.在程序中每一个选项对应一个情况的时候，一定要写break; */
    /* 2.如果case里包括的代码行过多，一定要加上{}*/
    /* 3.代码规范：一个函数尽量不要超过80行 最多不要超过120行 */

    int choice = 0;
    printf("请输入你的选项：");
    scanf("%d", &choice);

    /* switch */
    switch (choice)
    {
    case REGISTER:
        {
             printf("welcome to register!\n");
        }
        break;
    case LOGIN:
        {
            printf("welcome to login!\n");
        }
        break;
    case QUIT:
        {
            printf("welcome to quit!\n");
        }
        break;
    default:
        printf("input choice invalid\n");
        break;
    }
#endif

#if 0
    srand(time(NULL));
    /* 输出一个100以内的数字 1-100 */

    /* 循环 */
    /* for 循环*/
    int randomNum = 0;
    /* 代码规范 ：i->idx,定义数字，不允许使用魔鬼数字，要宏定义 */
    /* 将int放在循环中，循环多少次就会释放多少次的空间，所以在时间和效率上讲，int放在外面会比较好 */
    for (size_t idx = 0; idx < COUNT_NUM; idx++)
    {
        /* code */
        randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n",randomNum);

    }
   

#endif

#if 0

    srand(time(NULL));
    /* 变量尽量使用驼峰式命名 */
    int circleTime = COUNT_NUM >> 1;
    int randomNum = 0;

    /* 一定需要有退出的条件 */
    while (--circleTime)
    {
        /* 先判断再做里面的内容 */
        randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n",randomNum);
    }

#endif

#if 1
    /* 先执行再进行判断  常用在宏定义中 */
    int varaNum = 0;
    do
    {
        /* code */
        printf("varaNum:%d\n",varaNum);
    } while (varaNum);
    


#endif
    return 0;
}
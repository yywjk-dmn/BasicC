#include <stdio.h>
#include <string.h>



int main()
{

    /* 指针和字符串 */
    char *ptr = "hello world";
#if 0
    /* 字符串常量  什么叫字符串常量 */
    /* 打印字符串的每一个字符 */
    /* way1:使用for循环 */
    int len = strlen(ptr);
    printf("len : %d\n", len);
    char p = '0';
    for (int idx = 0; idx < strlen(ptr); idx++)
    {
        p = *ptr;
        printf("p: %s\n", p);
        ptr++;
        printf("strlen(ptr): %ld\n", strlrn(ptr));  //在这个里面，指针一直在移动，所以strlen(ptr)的值一直在变，导致后面没有办法出现所有的值
    }
#elif 0
    int len = strlen(ptr);
    printf("len : %d\n", len);
    char p = '0';
    for (int idx = 0; idx < len; idx++)
    {
        p = *ptr;
        printf("p: %c\t, idx:%d\n", p, idx);
        ptr++;
    }
#else
    /* way2： */
    while(*ptr != '\0')
    {
        printf("%c\t", *ptr);
        ptr++;
    }
    printf("\n");

#endif

#if 1
    /* 给字符串赋值  */
    /* 变量肯定有地址存放 */
    char *ptr2 = NULL;  //栈空间  离开函数就释放了

    ptr2 = "zhangsan";      //可以这样赋值是因为将存放zhangsan的地址给了Ptr2
    printf("%p\n", &("zhangsan"));
    printf("%p\n", ptr2);     
    //strcpy(ptr2, "zhangsan");  会发生段错误 因为字符串存放在全局（常量）区，常量无法更改
    printf("ptr2:%s\n", ptr2);

#endif



    return 0;
}
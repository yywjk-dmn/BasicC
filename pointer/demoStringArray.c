#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 5

int main()
{
#if 0
    /* 数组：
        1.一块连续的存储空间
        2.数组是存储相同的数据类型
        int array[BUFFER_SIZE]      整数数组
        char array[BUFFER_SIZE]     字符数组
        char *array[BUFFER_SIZE]    字符串数组
        //  todo.....结构体数组
    */

   /* 字符数组的内存在栈区 */
   char name[BUFFER_SIZE];    //字符数组
   memset(name, 0, sizeof(name));
   //name = "zhangsan"    错误方式  存在栈区，不能直接用等于，需要用到指针将要赋值的地址指向，然后进行替换和赋值
   strncpy(name, "zhangsan", sizeof(name) - 1);
   printf("name:%s\n", name); 

    printf("name[1]:%c\n", name[1]);
    name[1] = 'H';    /* 可以修改 */
    printf("name:%s\n", name); 


    /* 指针数组不分家 */
    printf("*(name + 2):%c\n", *(name + 2));    //输出a
    *(name + 2) = 'A';
    printf("name:%s\n", name); 


    /* conclusion:
        1.指针数组不分家
           name[X] = *(name + X),    X就是常量
    
    */

#endif

#if 1
    /* 字符串 : 内存在全局区 */
    char *ptr = "zhangsan";

    printf("ptr[1]:%c\n", ptr[1]);
    //ptr[1] = *(ptr + 1)
    printf("(ptr + 2):%c\n", *(ptr + 2));


    ptr[0] = 'Z';   //会发生段错误
    printf("ptr:%c\n", ptr[0]); 

    /* conclusion：
        1.内存：字符数组内存在栈区，可以被修改存储的值
               字符串内存在全局区，不可以被修改
    */

#endif

#if 1
    /* 字符串数组 */
    char *array[BUFFER_SIZE] = { 0 };
    memset(array, 0, sizeof(array));

    array[0] = "hello";
    array[1] = "world";
    array[2] =  "nihao";
    array[3] =  "zhangsan";
    array[4] =  "wangjunkai";

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %s\n", idx, array[idx]);
    }
    /* 字符串数组：1.存放的是一个数组 2.存放的是字符串 */
    
    printf("array[0][0]:%c\n", array[0][0]);    


#endif


    return 0;
}
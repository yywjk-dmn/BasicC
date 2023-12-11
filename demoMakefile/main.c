#include <stdio.h>
#include <stdlib.h>

int printString()
{
    int ret;
    printf("print string\n");
    return ret;
}
int main()
{
    int num1 = 10;
    printf("num1:%d\n",num1);
    printString();

    return 0;
}
#include "myString.h"


int myStrlen(const char *pStr)
{
    int count = 0;
    if (!pStr)
    {
        return count;
    }
    const char *tmpPtr = pStr;
    while (*tmpPtr != '\0')
    {
        count++;
        tmpPtr++;
    }
    return count;
}

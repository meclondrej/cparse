#ifndef STRTOINT_H
#define STRTOINT_H

#include "chartobyte.h"

/**
 * Converts a char[] to int
 * @param x The string to be converted
 * @param len Length of str
 * @param pRes Pointer to the result variable
 * @returns Whether or not was the conversion successful
 */
bool strtoint(char x[], int len, int* pRes)
{
    if (len == 0)
        return false;
    int res = 0;
    bool negative = false;
    for (int i = 0; i < len; i++)
    {
        if (i == 0 && x[i] == '-')
        {
            negative = true;
            continue;
        }
        if (x[i] == '\0')
            break;
        unsigned char num;
        if (!chartobyte(x[i], &num))
            return false;
        if (i != 0)
            res *= 10;
        res += (int)num;
    }
    *pRes = res;
    return true;
}

#endif

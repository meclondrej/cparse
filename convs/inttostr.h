#ifndef INTTOSTR_H
#define INTTOSTR_H

#include "bytetochar.h"

/**
 * Converts an int to char[]
 * @param x The int to be converted
 * @param len Length of str buffer
 * @param pRes Pointer to the result str buffer
 * @returns Whether or not is the buffer size sufficient
 */
bool inttostr(int x, int buflen, char* pRes)
{
    if (x == 0)
    {
        if (buflen < 2)
            return true;
        *pRes = '0';
        *(pRes + 1) = '\0';
    }
    bool negative = false;
    if (x < 0)
    {
        negative = true;
        x *= -1;
    }
    int len = 1;
    int power = 1;
    for (;;)
    {
        len++;
        int nextpower = power * 10;
        if (x / nextpower == 0)
            break;
        power = nextpower;
    }
    if (negative)
        len++;
    if (len > buflen)
        return false;
    if (negative)
        *pRes = '-';
    for (int i = (negative) ? 1 : 0; i < len - 1; i++)
    {
        bytetochar((unsigned char)(x / power), pRes + i);
        x = x % power;
        power /= 10;
    }
    *(pRes + (len - 1)) = '\0';
    return true;
}

#endif

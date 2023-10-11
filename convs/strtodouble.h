#ifndef STRTODOUBLE_H
#define STRTODOUBLE_H

#include "chartobyte.h"

/**
 * Converts a char[] to double
 * @param x The string to be converted
 * @param len Length of str
 * @param pRes Pointer to the result variable
 * @returns Whether or not was the conversion successful
 */
bool strtodouble(char x[], int len, double *pRes)
{
    if (len == 0)
        return false;
    double res = 0;
    bool decimal = false;
    bool negative = false;
    int first_decimal;
    for (int i = 0; i < len; i++)
    {
        if (i == 0 && x[i] == '-')
        {
            negative = true;
            continue;
        }
        if (x[i] == '\0')
            break;
        if (x[i] == '.')
        {
            if (decimal || i == len - 1)
                return false;
            decimal = true;
            first_decimal = i + 1;
            continue;
        }
        unsigned char num;
        if (!chartobyte(x[i], &num))
            return false;
        if (!decimal)
        {
            if (i != 0)
                res *= 10;
            res += (double)num;
        }
        else
        {
            double power = 10;
            for (int ex = 0; ex < i - first_decimal; ex++)
                power *= 10;
            res += (double) num / power;
        }
    }
    if (negative)
        res *= -1;
    *pRes = res;
    return true;
}

#endif

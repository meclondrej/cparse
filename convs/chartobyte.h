#ifndef CHARTOBYTE_H
#define CHARTOBYTE_H

/**
 * Converts a char to byte
 * @param x The char to be converted
 * @param pRes Pointer to the result variable
 * @returns Whether or not was the conversion successful
 */
bool chartobyte(char x, unsigned char* pRes)
{
    switch (x)
    {
    case '0':
        *pRes = (unsigned char)0;
        break;
    case '1':
        *pRes = (unsigned char)1;
        break;
    case '2':
        *pRes = (unsigned char)2;
        break;
    case '3':
        *pRes = (unsigned char)3;
        break;
    case '4':
        *pRes = (unsigned char)4;
        break;
    case '5':
        *pRes = (unsigned char)5;
        break;
    case '6':
        *pRes = (unsigned char)6;
        break;
    case '7':
        *pRes = (unsigned char)7;
        break;
    case '8':
        *pRes = (unsigned char)8;
        break;
    case '9':
        *pRes = (unsigned char)9;
        break;
    default:
        return false;
    }
    return true;
}

#endif

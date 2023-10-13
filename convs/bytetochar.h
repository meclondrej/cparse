#ifndef BYTETOCHAR_H
#define BYTETOCHAR_H

/**
 * Converts a byte to char
 * @param x The byte to be converted
 * @param pRes Pointer to the result variable
 * @returns Whether or not was the conversion successful
 */
bool bytetochar(unsigned char x, char* pRes)
{
    switch (x)
    {
    case (unsigned char)0:
        *pRes = '0';
        break;
    case (unsigned char)1:
        *pRes = '1';
        break;
    case (unsigned char)2:
        *pRes = '2';
        break;
    case (unsigned char)3:
        *pRes = '3';
        break;
    case (unsigned char)4:
        *pRes = '4';
        break;
    case (unsigned char)5:
        *pRes = '5';
        break;
    case (unsigned char)6:
        *pRes = '6';
        break;
    case (unsigned char)7:
        *pRes = '7';
        break;
    case (unsigned char)8:
        *pRes = '8';
        break;
    case (unsigned char)9:
        *pRes = '9';
        break;
    default:
        return false;
    }
    return true;
}

#endif

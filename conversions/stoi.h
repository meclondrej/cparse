// string to integer

bool stoi(char* str, int *out) {
    int j = 0;
    for (int i = 0; i < sizeof(str)/sizeof(str[0]); i++) {
        switch (str[i]) {
            case '0':
                j *= 10;
                break;
            case '1':
                j *= 10;
                j += 1;
                break;
            case '2':
                j *= 10;
                j += 2;
                break;
            case '3':
                j *= 10;
                j += 3;
                break;
            case '4':
                j *= 10;
                j += 4;
                break;
            case '5':
                j *= 10;
                j += 5;
                break;
            case '6':
                j *= 10;
                j += 6;
                break;
            case '7':
                j *= 10;
                j += 7;
                break;
            case '8':
                j *= 10;
                j += 8;
                break;
            case '9':
                j *= 10;
                j += 9;
                break;
            default:
                return false;
        }
    }
    *out = j;
    return true;
}
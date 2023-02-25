// string -> double

#include<stdbool.h>

double stod_div(int lvl) {
    double d = 10;
    for (int i = 1; i <= lvl; i++) {
        d *= 10;
    }
    return d;
}

bool stod(char* str, double *out) {
    double d = 0.0;
    bool decimal = false;
    int lvl = 1;
    for (int i = 0; i < sizeof(str)/sizeof(str[0]); i++) {
        if (decimal) {
            switch (str[i]) {
                case '0':
                    lvl++;
                    break;
                case '1':
                    d += 1 / stod_div(lvl);
                    lvl++;
                    break;
                case '2':
                    d += 2 / stod_div(lvl);
                    lvl++;
                    break;
                case '3':
                    d += 3 / stod_div(lvl);
                    lvl++;
                    break;
                case '4':
                    d += 4 / stod_div(lvl);
                    lvl++;
                    break;
                case '5':
                    d += 5 / stod_div(lvl);
                    lvl++;
                    break;
                case '6':
                    d += 6 / stod_div(lvl);
                    lvl++;
                    break;
                case '7':
                    d += 7 / stod_div(lvl);
                    lvl++;
                    break;
                case '8':
                    d += 8 / stod_div(lvl);
                    lvl++;
                    break;
                case '9':
                    d += 9 / stod_div(lvl);
                    lvl++;
                    break;
                default:
                    return false;
            }
            continue;
        }
        switch (str[i]) {
            case '0':
                d *= 10;
                break;
            case '1':
                d *= 10;
                d += 1;
                break;
            case '2':
                d *= 10;
                d += 2;
                break;
            case '3':
                d *= 10;
                d += 3;
                break;
            case '4':
                d *= 10;
                d += 4;
                break;
            case '5':
                d *= 10;
                d += 5;
                break;
            case '6':
                d *= 10;
                d += 6;
                break;
            case '7':
                d *= 10;
                d += 7;
                break;
            case '8':
                d *= 10;
                d += 8;
                break;
            case '9':
                d *= 10;
                d += 9;
                break;
            case '.':
                decimal = true;
                break;
            case ',':
                decimal = true;
                break;
            default:
                return false;
        }
    }
    *out = d;
    return true;
}
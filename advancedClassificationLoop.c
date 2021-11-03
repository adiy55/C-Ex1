#include "NumClass.h"
#include <math.h>

int isArmstrong(int n) {
    int tmp = n, check = n;
    double res, rem, lng;
    while (tmp > 0) {
        tmp = tmp / 10;
        lng++;
    }
    while (check > 0) {
        rem = check % 10;
        res += pow(rem, lng);
        check /= 10;
    }
    return (res == n);
}

int isPalindrome(int n) {
    int reversed = 0, tmp = n, digit;
    while (tmp > 0) {
        digit = tmp % 10;
        reversed = reversed * 10 + digit;
        tmp = tmp / 10;
    }
    return (reversed == n);
}
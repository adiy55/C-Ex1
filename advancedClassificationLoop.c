#include "NumClass.h"
#include <math.h>

int numLength(int);

int isArmstrong(int n) {
    int curr = n, sum = 0, digit;
    int len = numLength(n); // helper function (above)
    while (curr > 0) {
        digit = curr % 10;
        sum += pow(digit, len);
        curr = curr / 10;
    }
    return (sum == n);
}

int numLength(int num) { // calculates length of the number
    int l = 0;
    while (num > 0) {
        l++;
        num = num / 10;
    }
    return l;
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
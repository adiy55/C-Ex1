#include <NumClass.h>

int reversed(int, int);
int numLen(int);
int calc(int, int);
int power(int, int);

int isArmstrong(int n) {
    int length, check;
    length = numLen(n);
    check = calc(n, length);

    return (check == n);
}

int power(int digit, int times) {
    if (times == 0) {
        return 1;
    }
    return digit * power(digit, --times);
}

int numLen(int n) { // recursive calculation of number of digits (of n)
    if (n == 0) {
        return 0;
    }
    return 1 + numLen(n / 10);
}

int calc(int n, int len) { //Calculating the armStrong of n.
    if (n == 0) {
        return 0;
    }
    return power(n % 10, len) + calc(n / 10, len);
}

int isPalindrome(int n) {
    return (n == reversed(n, 0));
}

int reversed(int n, int rem) { // returns number with reversed digits
    if (n == 0) {
        return rem;
    }
    return reversed(n / 10, rem * 10 + n % 10);
}
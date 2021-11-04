#include "NumClass.h"

int reversed(int, int);

int numLen(int);

int calc(int, int);

int power(int, int);

int isArmstrong(int n) {
    int length, ans;
    length = numLen(n);
    ans = calc(n, length);

    return (ans == n);
}

int power(int digit, int t) { // multiplies digit t times (recursively)
    if (t == 0) {
        return 1;
    }
    return digit * power(digit, t - 1);
}

int numLen(int n) { // calculates number of digits of n (recursively)
    if (n == 0) {
        return 0;
    }
    return 1 + numLen(n / 10);
}

int calc(int n, int len) { // calculates if n is an armstrong number (recursively)
    if (n == 0) {
        return 0;
    }
    return power(n % 10, len) + calc(n / 10, len); // uses power helper function for each digit
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
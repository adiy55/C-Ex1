#include "NumClass.h"
#include <math.h>

int func(int);

int isPrime(int n) {
    if (n <= 0) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isStrong(int n) {
    int sum = 0, curr = n, digit, f;
    while (curr > 0) {
        digit = curr % 10;
        f = func(digit); // helper function
        curr = curr / 10;
        sum = sum + f;
    }
    return (sum == n);
}

int func(int d) { // calculates factorial of a given digit
    int ans = 1;
    for (int i = 2; i <= d; i++) {
        ans = ans * i;
    }
    return ans;
}
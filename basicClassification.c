#include <NumClass.h>
#include <math.h>

int func(int);

int isPrime(int n) {
    if (n % 2 == 0 || n <= 0) return 0;
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isStrong(int n) {
    int sum, rem, check = n, f;
    while (check != 0) {
        rem = check % 10;
        f = func(rem);
        check = check / 10;
        sum = sum + f;
    }
    return (sum == n);
}

int func(int rem) {
    int ans = 1;
    for (int i = 1; i <= rem; i++) {
        ans = ans * i;
    }
    return ans;
}
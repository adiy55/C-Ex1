#include <stdio.h>
#include "NumClass.h"

int main() { // 0 = false, 1 = true
    int num, ans;

    printf("isStrong- Please enter a number: ");
    scanf("%d", &num);
    ans = isStrong(num);
    printf("%d\n", ans);

    printf("isPrime- Please enter a number: ");
    scanf("%d", &num);
    ans = isPrime(num);
    printf("%d\n", ans);

    printf("isArmstrong- Please enter a number: ");
    scanf("%d", &num);
    ans = isArmstrong(num);
    printf("%d\n", ans);

    printf("isPalindrome- Please enter a number: ");
    scanf("%d", &num);
    ans = isPalindrome(num);
    printf("%d\n", ans);

    return 0;
}
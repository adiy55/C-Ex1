#include <stdio.h>
#include "NumClass.h"

int main() { // 0 = false, 1 = true

    int num1, num2;

    scanf("%d%d", &num1, &num2);

    if (num2 < num1) {
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    for (int i = num1; i <= num2; i++) {
        if (isArmstrong(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    for (int i = num1; i <= num2; i++) {
        if (isPalindrome(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    for (int i = num1; i <= num2; i++) {
        if (isStrong(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
//    int num, ans;
//
//    printf("isStrong- Please enter a number: ");
//    scanf("%d", &num);
//    ans = isStrong(num);
//    printf("%d\n", ans);
//
//    printf("isPrime- Please enter a number: ");
//    scanf("%d", &num);
//    ans = isPrime(num);
//    printf("%d\n", ans);
//
//    printf("isArmstrong- Please enter a number: ");
//    scanf("%d", &num);
//    ans = isArmstrong(num);
//    printf("%d\n", ans);
//
//    printf("isPalindrome- Please enter a number: ");
//    scanf("%d", &num);
//    ans = isPalindrome(num);
//    printf("%d\n", ans);

    return 0;
}
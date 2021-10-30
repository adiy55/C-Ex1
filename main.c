#include <stdio.h>
#include <NumClass.h>

int main() { // 0 = false, 1 = true
    int num, ans;
    printf("Please enter a number: ");
    scanf("%d", &num);
    ans = isArmstrong(num);
    printf("%d", ans);
    return 0;
}
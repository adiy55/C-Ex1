#include <stdio.h>
#include <NumClass.h>

int main(){
    int num, ans =0;
    printf("\nPlease enter a number: ");
    scanf("%d",&num);
    
    return 0;
}
int isArmstrong(int n){
    int res,rem,lng=n.length,check =n;
    while (check != 0) {
        rem = check % 10;
        
       res += pow(rem, lng);
        
       
       check /= 10;
    }

    if (result == n){
        printf("%d is an Armstrong number.", n);
        return 1;    
    }
        
    else{
        printf("%d is not an Armstrong number.", n);
        return 0;
    }

    return 0;
}
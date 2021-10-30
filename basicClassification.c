#include <stdio.h>
#include <NumClass.h>
#include <math.h>
int func(int);

int main(){
    int num, ans =0;
    printf("\nPlease enter a number: ");
    scanf("%d",&num);
    
    return 0;
}

int isPrime(int n)
{
    if(n%2==0) return 0;
	int i;
	for(i=3;i<=n/2;i=i+2)
	{
		if(n%i==0)
            return 0;
			
	}
	return 1;
}

int isStrong(int n){
    int sum,rem,check =n,f;
    while (check != 0) {
        rem = check % 10; 
        int f=func(rem);  
        check=check/10;  
        sum=sum+f;  
    }
    if(sum==n)  
    {  
        printf("$d,Number is a strong",n);
        return 1;  
    }  
    else  
    {  
        printf("$d,Number is not a strong",n);  
        return 0;
    }  
return 0;
}
int func(int rem){
    int ans =1;
 for(int i=1;i<=rem;i++)  
    {  
        ans=ans*i;  
    }  
    return ans;
}
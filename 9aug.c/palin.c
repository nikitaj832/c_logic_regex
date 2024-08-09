#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int temp=n;
    int rem ,sum=0;
    while(n>0){
        rem = n%10;
        sum =sum*10+rem;
        n=n/10;
    }
    if (temp==sum){
        printf("number is pallindrome");
    
    }
    else{
        printf("not pallindrome");
    }
    return 0;
}
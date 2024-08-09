#include<stdio.h>
int main(){
         int num;
         printf("enter number:");
         scanf("%d",&num);
         int temp=num;
         int rem ,sum=0;
         while(num>0){
            rem = num%10;
            sum = sum+rem*rem*rem;
            num=num/10;
         }
         if(temp==sum){
          printf("armstong number");
         }
         else{
            printf("not armstrong number");
         }
    return 0;
}
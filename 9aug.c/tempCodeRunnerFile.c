#include<stdio.h>
int main(){
    int num=100,sum=0;
    int temp = num;
    int square,rem;
    while(num>0){
        square = num*num;
        rem = num%10;
        sum = sum+rem;
        num=num/10;

    }
     if(sum==temp){
        printf("neon number");
     }
     else{
        printf("not neon number");
     }
     return 0;
}
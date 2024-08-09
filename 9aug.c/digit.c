//sum of digit :
// 434 : 4+3+4 =>11

#include<stdio.h>
int main(){
    int num=434;
    int rem,sum=0;
    int temp=num;
    while(num>0){
         rem = num%10;
         sum = sum+rem;
         num=num/10;
    }
    printf("%d",sum);
    return 0;
}
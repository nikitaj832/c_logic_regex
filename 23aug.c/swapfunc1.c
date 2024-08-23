#include<stdio.h>
void swap(int a,int b);
void wswap(int a,int b);
int main(){
    int num1,num2;
    printf("enter value of num1 and num2:");
    scanf("%d%d",&num1,&num2);
    swap(num1,num2);
    wswap(num1,num2);
   return 0;
}
void swap(int a,int b){
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping a is %d\n",a);
    printf("after swaping b is %d\n",b);
}
void wswap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swaping a is %d\n",a);
    printf("after swaping b is %d\n",b);
}
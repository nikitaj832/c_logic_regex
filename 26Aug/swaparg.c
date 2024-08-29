#include<stdio.h>
int swap(int a,int b);
int wswap(int a,int b);
int main(){
    int num1,num2;
    printf("enter value of num1 and num2:");
    scanf("%d%d",&num1,&num2);
    printf("%d", swap(num1,num2));
    printf("%d",wswap(num1,num2));
   return 0;
}
int swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping:%d\n",a,b);
    return a,b;
}
int wswap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swaping:%d\n",a,b);
    return a,b;

}
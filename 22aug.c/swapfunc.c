#include<stdio.h>
void swap();
void wswap();
int main(){
    swap();
    wswap();
    
  return 0;
}
void swap(){
    int a,b;
    printf("enter value of a and b:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping a is %d\n",a);
    printf("after swaping b is %d\n",b);
}
void wswap(){
    int a,b,temp;
    printf("enter value of a and b:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swaping a is %d\n",a);
    printf("after swaping b is %d\n",b);
}


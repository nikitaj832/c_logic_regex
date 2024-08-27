#include<stdio.h>
int swap();
int wswap();
int main(){
    printf("%d",swap());
    printf("%d",wswap());
    
  return 0;
}
int swap(){
    int a,b;
    printf("enter value of a and b:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping:%d\n",a,b);
    return a,b;
  
}
int wswap(){
    int a,b,temp;
    printf("enter value of a and b:");
   
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swaping : %d\n",a,b);
    return a,b;
   
}


#include<stdio.h>
int add(int a,int b);
int mult(int a,int b);
int sub(int a,int b);
int div(int a,int b);
int main(){
    int a,b;
    printf("enter no a and b:");
    scanf("%d%d",&a,&b);
   printf("%d\n", add(a,b));
    printf("%d\n",sub(a,b));
    printf("%d\n",mult(a,b));
    printf("%d\n",div(a,b));
  return 0;
}
int add(int a,int b){
    int c=a+b;
    return c;
}
int sub(int a,int b){
    int c=a-b;
    return c;
}
int mult(int a,int b){
    int c=a*b;
    return c;
}
int div(int a,int b){
    int c=a/b;
    return c;
}



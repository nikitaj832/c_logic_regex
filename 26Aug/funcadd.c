#include<stdio.h>
int add();
int mult();
int sub();
float div();
int main(){
    printf("%d",add());
    printf("%d",sub());
    printf("%d",mult());
    printf("%f",div());
  return 0;
}
int add(){
    int a,b,c;
    printf("enter value of a and b:\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
int sub(){
    int a,b,c;
    printf("enter value of a and b:\n");
    scanf("%d%d",&a,&b);
    c=a-b;
     return c;
}
int mult(){
     int a,b,c;
    printf("enter value of a and b:\n");
    scanf("%d%d",&a,&b);
     c=a*b;
     return c;
}
float div(){
     float a,b,c;
    printf("enter value of a and b:\n");
    scanf("%f%f",&a,&b);
    c=a/b;
     return c;
}

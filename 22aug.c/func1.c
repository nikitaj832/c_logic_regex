#include<stdio.h>
void add();
void mult();
void sub();
void div();
int main(){
    add();
    sub();
    mult();
    div();
  return 0;
}
void add(){
    int a,b,c;
    printf("enter value of a and b:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d\n",c);
}
void sub(){
    int a,b,c;
    printf("enter value of a and b:");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("%d\n",c);
}
void mult(){
     int a,b,c;
    printf("enter value of a and b:");
    scanf("%d%d",&a,&b);
     c=a*b;
    printf("%d\n",c);
}
void div(){
     int a,b,c;
    printf("enter value of a and b:");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("%d",c);
}

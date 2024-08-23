#include<stdio.h>
void add(int a,int b);
void mult(int a,int b);
void sub(int a,int b);
void div(int a,int b);
int main(){
    add(5,8);
    sub(10,5);
    mult(30,56);
    div(45,2);
  return 0;
}
void add(int a,int b){
    int c=a+b;
    printf("%d\n",c);
}
void sub(int a,int b){
    int c=a-b;
    printf("%d\n",c);
}
void mult(int a,int b){
    int c=a*b;
    printf("%d\n",c);
}
void div(int a,int b){
    int c=a/b;
    printf("%d",c);
}



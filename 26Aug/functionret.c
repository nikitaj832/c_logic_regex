#include<stdio.h>
float show();
int main(){
    printf("%f",show());
    return 0;
}
float show(){
    float a;
    printf("enter number:");
    scanf("%f",&a);
    return a;
}
#include<stdio.h>
int main(){
    int a=1;
    int sum=0;
    while(a<=10){
        sum = sum+a;
        a++;
    }
    printf("%d",sum);
    return 0;
}
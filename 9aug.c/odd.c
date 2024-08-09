#include<stdio.h>
int main(){
      int a=10,sum=0;
         while(a>=1){
            if(a%2!=0){
                sum = sum+a;
        }
        a--;
         }
    printf("%d",sum);
   

    return 0;
}
//1--->10 even number ka sum :

#include<stdio.h>
int main(){
      int a=1,sum=0;
         while(a<=10){
            if(a%2==0){
                sum = sum+a;
        }
        a++;
         }
    printf("%d",sum);
   

    return 0;
}

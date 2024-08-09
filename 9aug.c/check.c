#include<stdio.h>
int main(){
    char a;
    printf("enter character:\n");
    scanf("%c",&a);
    if (a=='a'){
         int num;
         printf("enter number:");
         scanf("%d",&num);
         int temp=num;
         int rem ,sum=0;
         while(num>0){
            rem = num%10;
            sum = sum+rem*rem*rem;
            num=num/10;
         }
         if(temp==sum){
          printf("armstong number");
         }
         else{
            printf("not armstrong number");
         }
   }
   if(a=='p'){
         int n;
       printf("enter number:");
       scanf("%d",&n);
        int temp=n;
        int rem ,sum=0;
        while(n>0){
        rem = n%10;
        sum =sum*10+rem;
        n=n/10;
    }
       if (temp==sum){
          printf("number is pallindrome");
    
    }
       else{
           printf("not pallindrome");
    }
   }
   if(a=='r'){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int rem ,sum=0;
    while(n>0){
        rem = n%10;
        sum =sum*10+rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
   }
   if(a=='s'){
    int a=1,b;
    printf("enter number:");
    scanf("%d",&b);
    int sum=0;
    while(a<=b){
        sum = sum+a;
        a++;
    }
    printf("%d",sum);
   }
 return 0;
}
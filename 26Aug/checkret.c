#include<stdio.h>
int arm();
int pal();
int even();
int rev();
int count();
int sum();
int fab();
int fact();
int main()
{
   char a;
   printf("enter value of a :");
   scanf(" %c",&a);
   if(a=='a') {
      printf("%d",  arm());
}
   if(a=='p') {
         printf("%d", pal());
         }
   if(a=='e') {
        printf("%d", even());}
   if(a=='r') {
        printf("%d",rev());}
   if(a=='c') {
       printf("%d",count());}
    if(a=='s') {
       printf("%d",  sum());}
    if(a=='f'){
      printf("%d",fab());
    }
    if(a=='g'){
      printf("%d",fact());
    }
   return 0;
}
int arm(){
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
          printf("armstong number\n");
         }
         else{
            printf("not armstrong number\n");
         }
}
int pal(){
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
        printf("number is pallindrome\n");
    
    }
    else{
        printf("not pallindrome\n");
    }
}
int even(){
        int a=1;
            if(a%2==0){
              printf("even\n");
            }
        else{
            printf("odd\n");
        }
    }

int rev(){
          int n=4456;
    int rem ,sum=0;
    while(n>0){
        rem = n%10;
        sum =sum*10+rem;
        n=n/10;
    }
    return sum;
}
int count(){
      int num =342484;
    int count=0;
    while (num>0){
        num = num/10;
        count++;
    }
     return count;
}
int sum(){
     int sum=0;
     for(int i=1;i<=10;i++){
         sum = sum+i;
         
     }
     return sum;

 
}
int fact(){
  int fact=1;
  for(int i=1;i<=10;i++){
    fact=fact*i;
    
  }
  return fact;
}
int fab(){
   int n1=0,n2=1,n3;
    printf("%d%d",n1,n2);
    for(int i=1;i<=5;i++){
        n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
    }
    
}
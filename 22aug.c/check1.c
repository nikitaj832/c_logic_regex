#include<stdio.h>
void arm();
void pal();
void even();
void rev();
void count();
void sum();
int main()
{
   char a;
   printf("enter value of a :");
   scanf(" %c",&a);
   if(a=='a') {
       arm();
}
   if(a=='p') {
         pal();
         }
   if(a=='e') {
    even();}
   if(a=='r') {
    rev();}
   if(a=='c') {
    count();}
    if(a=='s') {
        sum();}
   return 0;
}
void arm(){
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
void pal(){
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
void even(){
        int a=1;
            if(a%2==0){
              printf("even\n");
            }
        else{
            printf("odd\n");
        }
    }

void rev(){
          int n=4456;
    int rem ,sum=0;
    while(n>0){
        rem = n%10;
        sum =sum*10+rem;
        n=n/10;
    }
    printf("%d\n",sum);
}
void count(){
      int num =342484;
    int count=0;
    while (num>0){
        num = num/10;
        count++;
    }
     printf("%d\n",count);
}
void sum(){
     int sum=0;
     for(int i=1;i<=10;i++){
         sum = sum+i;
         
     }
     printf("%d\n",sum);
}


/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void arm();
void pal();
void even();
void rev();
void count();
void fact();
void fab();
void add();
int main()
{
    arm();
    pal();
    even();
    rev();
    count();
    fact();
    fab();
    add();
    return 0;
}
void arm(){
   int num=153;
   int temp=num,rem,sum=0;
   while(num>0){
       rem=num%10;
       sum=sum+rem*rem*rem;
       num=num/10;
   }
   if(temp==sum){
       printf("no. is armstrong\n");
   }
   else{
       printf("not armstrong\n");
   }
}
void pal(){
    int num =121;
    int temp=num,rem,sum =0;
    while(num>0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
      if(temp==sum){
       printf("no. is pal\n");
   }
   else{
       printf("not pal\n");
   }
}
void even(){
    int n=44;
    if(n%2==0){
        printf("even\n");
        
    }
    else{
        printf("odd\n");
   }
}
void rev(){
    int num = 447586,rem;
    int sum=0;
    while(num>0){
        rem=num%10;
        sum =sum*10+rem;
        num=num/10;
        
    }
       printf("%d\n",sum);
}
void count(){
   int num=4309598,count=0;
   while(num>0){
       num=num/10;
       count++;
   }
   printf("%d\n",count);  
}
void fact(){
    int fact=1;
    for(int i=1;i<=5;i++){
       fact=fact*i;
    
    }
    printf("%d\n",fact);
}   
 void fab(){
     int n1=0,n2=1,n3;
     printf("%d%d",n1,n2);
     for (int i=1;i<=6;i++){
         n3=n1+n2;
         printf("%d",n3);
         n1=n2;
         n2=n3;
     }
     printf("\n");
 }
 void add(){
     int sum=0;
     for(int i=1;i<=5;i++){
         sum=sum+i;
         
     }
      printf("%d",sum);
 }
    
    
    

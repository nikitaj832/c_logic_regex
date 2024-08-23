#include<stdio.h>
void arm(int num);
void pal(int num);
void even(int num);
void rev(int num);
void count(int num);
void sum(int num);
void fact(int num);
void fabo(int num);
int main()
{
    char a;
    printf("enter value of a:");
    scanf(" %c",&a);
    if(a=='a'){
        int n;
        printf("enter value of n:");
        scanf("%d",&n);  
        arm(n);
    }
  
    else if(a=='p'){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    pal(n);
    }
     else if(a=='e'){
         int n;
        printf("enter value of n:\n");
        scanf("%d",&n);
          even(n);
    }
    else if(a=='r'){
          rev(4456);
    }
    else if(a=='c'){
         
      count(342345);
    }
    else if(a=='s'){

          sum(10);
 }
   else if(a=='f'){

          fact(5);
 }
   else if(a=='g'){

          fabo(5);
 }
   return 0;
}
void arm(int num){
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
void pal(int num){
    int temp=num;
    int rem ,sum=0;
    while(num>0){
        rem = num%10;
        sum =sum*10+rem;
        num=num/10;
    }
    if (temp==sum){
        printf("number is pallindrome\n");
    
    }
    else{
        printf("not pallindrome\n");
    }
}
void even(int num){
    if(num%2==0){
         printf("even\n");
    }
    else{
            printf("odd\n");
    }
}

void rev(int num){
        
    int rem ,sum=0;
    while(num>0){
        rem = num%10;
        sum =sum*10+rem;
        num=num/10;
    }
    printf("%d\n",sum);
}
void count(int num){
     int count=0;
    while (num>0){
        num = num/10;
        count++;
    }
     printf("%d\n",count);
}
void sum(int num){
     num = 0;
     for(int i=1;i<=10;i++){
         num= num+i;
         
     }
     printf("%d\n",num);
}
void fact(int num){
     int fact=1;
     for(int i=1;i<=num;i++){
         fact= fact*i;
         
     }
     printf("%d\n",fact);
}
void fabo(int num){
    int n1=0,n2=1,n3;
    printf("%d%d",n1,n2);
    for(int i=1;i<=num;i++){
        n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
    }
}

#include<stdio.h>
int arm(int num);
int pal(int num);
int even(int num);
int rev(int num);
int count(int num);
int sum(int num);
int fact(int num);
int fabo(int num);
int main()
{
    char a;
    printf("enter value of a:");
    scanf(" %c",&a);
    if(a=='a'){
        int n;
        printf("enter value of n:");
        scanf("%d",&n);  
       printf("%d", arm(n));
    }
  
    else if(a=='p'){
    int n;
    printf("enter number:");
    scanf("%d",&n);
      printf("%d", pal(n));
    }
     else if(a=='e'){
         int n;
        printf("enter value of n:\n");
        scanf("%d",&n);
          printf("%d",   even(n));
    }
    else if(a=='r'){
         printf("%d",    rev(4456));
    }
    else if(a=='c'){
         
       printf("%d",  count(342345));
    }
    else if(a=='s'){

          printf("%d",   sum(10));
 }
   else if(a=='f'){

          printf("%d",   fact(5));
 }
   else if(a=='g'){

            printf("%d", fabo(5));
 }
   return 0;
}
int arm(int num){
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
int pal(int num){
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
int even(int num){
    if(num%2==0){
         printf("even\n");
    }
    else{
            printf("odd\n");
    }
}

int rev(int num){
        
    int rem ,sum=0;
    while(num>0){
        rem = num%10;
        sum =sum*10+rem;
        num=num/10;
    }
    printf("%d\n",sum);
}
int count(int num){
     int count=0;
    while (num>0){
        num = num/10;
        count++;
    }
     return count;
}
int sum(int num){
     num = 0;
     for(int i=1;i<=10;i++){
         num= num+i;
         
     }
    return num;
}
int fact(int num){
     int fact=1;
     for(int i=1;i<=num;i++){
         fact= fact*i;
         
     }
     return fact;
}
int fabo(int num){
    int n1=0,n2=1,n3;
    printf("%d%d",n1,n2);
    for(int i=1;i<=num;i++){
        n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
    }
}

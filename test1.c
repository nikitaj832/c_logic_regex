// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(i==1 ||i==5 ||i+j==5+i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
           
//         }
//        printf("\n"); 
//     }
//     return 0;
// }

// Check whether the trainge , square , reactanlge (area & volume)
// ->input area /volume 
// area 
// traingle square rectangle 
// square 
// #include<stdio.h>
// int main(){
//     char a;
//     printf("enter ch:");
//     scanf("%c",&a);
//     if(a=='t'){
//         float area,volume;
//         float b=5,c=8.45,a=5;
//         area=1/2.0*b*c;
//         printf("area:%f",area);
//         volume = a*b*c;
//          printf("volume:%f",volume);
//     }
//      else if(a=='r'){
//         float area,volume;
//         float b=5,c=8.45,a=5;
//         area=b*c;
//         printf("area:%f",area);
//         volume = a*b*c;
//          printf("volume:%f",volume);
//     }
//       if(a=='s'){
//         float area,volume;
//         float a=5;
//         area=a*a;
//         printf("area:%f",area);
    
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a=547566,count =0;
//     while(a>0){
//         a=a/10;
//         count++;
      
//     }
//     printf("%d",count);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=5,fact =1;
//     for(int i=1;i<=5;i++){
//       fact = fact*i;
      
//     }
//      printf("%d",fact); 
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int sum=0;
//     for(int i=1;i<=5;i++){
//       sum =sum+i;
      
//     }
//      printf("%d",sum); 
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=0;j<5;j++){
//             printf("%d ",i+j*5);
//         }
//        printf("\n"); 
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(i==1||j==1 ||i==3||j==5){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
           
//         }
//        printf("\n"); 
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a=547566,rem,sum=0;
//     while(a>0){
//         rem=a%10;
//         sum=sum*10+rem;
//         a=a/10;
      
//     }
//     printf("%d",sum);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter num");
//     scanf("%d",&num);
//     for(int i=1;i<=10;i++){
      
//             printf("%d\n",i*num);
        
       
//     }
//     return 0;
// }



// 1
// 12
// 234
// 3456
// 45678

// #include<stdio.h>
// int main(){
//     for(int i=0;i<=5;i++){
//         for(int j=0;j<=i;j++){
//             printf("%d ",i+j+1);
//         }
//        printf("\n"); 
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
    // int n;
    // printf("enter number:");
    // scanf("%d",&n);
    // int temp=n;
    // int rem ,sum=0;
    // while(n>0){
    //     rem = n%10;
    //     sum =sum*10+rem;
    //     n=n/10;
    // }
    // if (temp==sum){
    //     printf("number is pallindrome");
    
    // }
    // else{
    //     printf("not pallindrome");
    // }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//    int a,b,c;
//    printf("enter number a,b and c");
//    scanf("%d%d%d",&a,&b,&c);
//    if(a>b && a>c){
//     printf(" a is maximum");
//    }
//    else if(b>a && b>c){
//     printf(" b is maximum");

// }
//    else{
//     printf("c is maximum");
// }
// return 0;
// }

// #include<stdio.h>
// int main(){
//    int age=45;
 
//    if(age>=18){
//     printf(" eligible");
//    }
//    else{
//     printf("not eligible");
// }
// return 0;
// }

// #include<stdio.h>
// int main(){
//    char a;
//    printf("enter char");
//    scanf("%c",&a);
//    if(a=='m'){
//     printf("male");
//    }
//    else if(a=='f'){
//     printf("female");
//    }

// return 0;
// }



// #include<stdio.h>
// int main(){
//    int a;
//    printf("enter ");
//    scanf("%d",&a);
//    if(a%5==0 || a%8==0){
//     printf("divisible");
//    }
//    else {
//     printf("not");
//    }

// return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter no.");
//     scanf("%d",&n);
//     int n1=0,n2=1,n3;
//     printf("%d %d",n1,n2);
//     for(int i=1;i<=n;i++){
//         n3=n1+n2;
//         printf("%d",n3);
//         n1=n2;
//         n2=n3;
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter value of a and b:");
//     scanf("%d%d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("after swaping a is %d\n",a);
//     printf("after swaping b is %d\n",b);

//   return 0;
// }

// #include<stdio.h>
// int main(){
//          int num;
//          printf("enter number:");
//          scanf("%d",&num);
//          int temp=num;
//          int rem ,sum=0;
//          while(num>0){
//             rem = num%10;
//             sum = sum+rem*rem*rem;
//             num=num/10;
//          }
//          if(temp==sum){
//           printf("armstong number");
//          }
//          else{
//             printf("not armstrong number");
//          }
//     return 0;
// }

// #include<stdio.h>
// int fact(int num);

// int main()
// {
   
//    printf("%d", fact(10));
// return 0;
// }
// int fact(int num){
//      int fact=1;
//      for(int i=1;i<=num;i++){
//          fact= fact*i;
         
//      }
//      return fact;
// }


// #include<stdio.h>
// int main()
// {
//   int s, e;
//  printf("enter value starting and ending n.");
//  scanf("%d %d",&s,&e);
//  for(int i=s;i<=e;i++){
//     if(i%2==0){
//         printf("%d\n",i);
//     }
  
//  }
// return 0;
// }







// #include<stdio.h>
// void arm();
// void pal();
// int main()
// {

//   arm();
//   pal();

// return 0;
// }
// void arm(){
//       int num;
//     printf("enter num");
//     scanf("%d",&num);
//         int temp=num;
//          int rem ,sum=0;
//          while(num>0){
//             rem = num%10;
//             sum = sum+rem*rem*rem;
//             num=num/10;
//          }
//          if(temp==sum){
//           printf("armstong number\n");
//          }
//          else{
//             printf("not armstrong number\n");
//          }
// }
// void pal(){
//       int num;
//      printf("enter num");
//     scanf("%d",&num);
//     int temp=num;
//     int rem ,sum=0;
//     while(num>0){
//         rem = num%10;
//         sum =sum*10+rem;
//         num=num/10;
//     }
//     if (temp==sum){
//         printf("number is pallindrome");
    
//     }
//     else{
//         printf("not pallindrome");
//     }
// }


// #include<stdio.h>
// void display();
// int main(){
//  display();

// return 0;
// }   
//     void display(){
//    char a;
//    printf("enter char");
//    scanf("%c",&a);
//    if(a=='m'){
//     printf("male");
//    }
//    else if(a=='f'){
//     printf("female");
//    }

// }






// #include<stdio.h>
// int main(){
//  int a;
//  printf("enter the value of a:");
//  scanf("%d",&a);
//  if(a==1){
//     printf("one");
//  }
//  else if(a==2)
//  {
//     printf("two");
//  }
//   else if(a==3)
//  {    
//     printf("three");
//  }
//  else{
//     printf("input is not valid");
//  }
// return 0;
// }


// #include<stdio.h>
// int main(){
//  char a;
//  printf("enter the value of a:");
//  scanf("%c",&a);
//  if(a=='a'){
//     int num1,num2,num3;
//     printf("enter the value of num1 and num2 :");
//     scanf("%d %d", &num1,&num2);
//     num3 = num1+num2;
//     printf("%d",num3);
//  }


//  else{
//     printf("input is not valid");
//  }
// return 0;
// }



//divisible by 2 and 3
// #include<stdio.h>
// int main(){
//  int a;
//  printf("enter the value of a:");
//  scanf("%d",&a);
//  if(a%2==0  && a%3==0){
//     printf("div by 2 and 3");
//  }
//  else{
//     printf("input is not valid");
//  }
// return 0;
// }


//check no. between 1 to 5:
// #include<stdio.h>
// int main(){
//  int a;
//  printf("enter the value of a:");
//  scanf("%d",&a);
//  if(a>=1 && a<=5){
//     printf("between 1 to 5");
//  }
//  else{
//     printf("not match");
//  }
// return 0;
// }

// #include<stdio.h>
// int main(){
//  int a;
//  printf("enter the value of a:");
//  scanf("%d",&a);
//  if(a==1){
//     printf("sundya");
//  }
//  else if(a==2)
//  {
//     printf("monday");
//  }
//   else if(a==3)
//  {    
//     printf("tuesday");
//  }
//   else if(a==4)
//  {    
//     printf("wednesday");
//  }
//   else if(a==5)
//  {    
//     printf("thursday");
//  }
//   else if(a==6)
//  {    
//     printf("friday");
//  }
//   else if(a==7)
//  {    
//     printf("saturday");
//  }
//  else{
//     printf("input is not valid");
//  }
// return 0;
// }

//month print
// #include<stdio.h>
// int main(){
//  int a;
//  printf("enter the value of a:");
//  scanf("%d",&a);
//  if(a==1){
//     printf("january");
//  }
//  else if(a==2)
//  {
//     printf("february");
//  }
//   else if(a==3)
//  {    
//     printf("march");
//  }
//   else if(a==4)
//  {    
//     printf("april");
//  }
//   else if(a==5)
//  {    
//     printf("may");
//  }
//   else if(a==6)
//  {    
//     printf("june");
//  }
//   else if(a==7)
//  {    
//     printf("july");
//  }
//  else if(a==8)
//  {    
//     printf("august");
//  }
//  else if(a==9)
//  {    
//     printf("september");
//  }
//  else if(a==10)
//  {    
//     printf("october");
//  }
//  else if(a==11)
//  {    
//     printf("november");
//  }
//  else if(a==12)
//  {    
//     printf("december");
//  }
//  else{
//     printf("input is not valid");
//  }
// return 0;
// }


//print
// q,w,e,r,t,y,u,i,o,p :upper line 

// a,s,d,f,g,h,j,k,l :mid line 

// z,x,c,v,b,n,m :lower line 

// input is not valid



// #include<stdio.h>
// int main(){
//  char a;
//  printf("enter the value of a:");
//  scanf("%c",&a);
//  if(a=='q' || a=='w' || a=='e' || a=='r' || a=='t' || a=='y' || a=='u' || a=='i' || a=='o' || a=='p'){
//     printf("upperline");
//  }
//  else if(a=='a' || a=='s' || a=='d' || a=='f' || a=='g' || a=='h' || a=='j' || a=='k' || a=='l')
//  {
//     printf("midline");
//  }
//   else if(a=='z' || a=='x' || a=='c' || a=='v' || a=='b' || a=='n' || a=='m')
//  {    
//     printf("lowerline");
//  }
//  else{
//     printf("input is not valid");
//  }
// return 0;
// }


//print
// a :apple 
// b :ball
// c :cat 
// d :dog 

// input is not valid

// #include<stdio.h>
// int main(){
//  char a;
//  printf("enter the value of a:");
//  scanf("%c",&a);
//  if(a=='a'){
//     printf("apple");
//  }
//  else if(a=='b')
//  {
//     printf("ball");
//  }
//   else if(a=='c')
//  {    
//     printf("cat");
//  }
//   else if(a=='d')
//  {    
//     printf("dog");
//  }
//  else{
//     printf("input is not valid");
//  }
// return 0;
// }



// print 
// a :
// 	two number addition

// s :
// 	two number substraction

// m :
// 	two number multiplication

// d :
// 	two number divide 

// o :     
//        two number modular 

// input is not valid :

// #include<stdio.h>
// int main(){
//  char a;
//  printf("enter the value of a:");
//  scanf("%c",&a);
//  if(a=='a'){
//    int n1,n2,sum;
//    printf("enter value of n1 and n2 :");
//    scanf("%d %d" , &n1,&n2);
//    sum= n1+n2;
//    printf("the sum is : %d",sum);
//  }
//  else if(a=='s'){
//    int n3,n4,sub;
//    printf("enter value of n3 and n4 :");
//    scanf("%d %d" , &n3,&n4);
//    sub= n3-n4;
//    printf("the sub is : %d",sub);
//  }
//  else if(a=='m'){
//    int n5,n6,mult;
//    printf("enter value of n5 and n6 :");
//    scanf("%d %d" , &n5,&n6);
//    mult= n5*n6;
//    printf("the mult is : %d",mult);
//  }
//  else if(a=='d'){
//    int n7,n8,div;
//    printf("enter value of n7 and n8 :");
//    scanf("%d %d" , &n7,&n8);
//    div= n7/n8;
//    printf("%d",div);
//  }
//   else if(a=='o'){
//    int n9,n10,mod;
//    printf("enter value of n9 and n10 :");
//    scanf("%d %d" , &n9,&n10);
//    mod= n9%n10;
//    printf("%d",mod);
//  }
//  else{
//     printf("input is not valid");
//  }
// return 0;
// }


// 7) print:
// s :
// 	two number input number swap without third variable 

// w :
// 	two number input number swap with third variable 

// input is not valid :

// #include<stdio.h>
// int main(){
//  char a;
//  printf("enter the value of a:");
//  scanf("%c",&a);
//  if(a=='s'){
//    int a,b;
//    printf("enter value of a and b :");
//    scanf("%d %d" , &a,&b);
//    a = a+b;
//     b = a-b;
//     a = a-b;
//     printf("the swap value of a is : %d\n",a);
//     printf("the swap value of b is : %d\n",b);
  
//  }
//  else if(a=='w'){
//    int a,b,c;
//    printf("enter value of a and b :");
//    scanf("%d %d" , &a,&b);
// c=a;
// a=b;
// b=c;
//     printf("the swap value of a is : %d\n",a);
//     printf("the swap value of b is : %d\n",b);
  
//  }
 
//   else{
//     printf("input is not valid");
//  }
// return 0;
// }



// user input number : 
// 	2 nd 3 both 
// 	6 and 9 anyone 
// 	5 and 4 both 
// 	3 and 8 anyone 

// #include<stdio.h>
// int main(){
//  int a;
//  printf("enter the value of a:");
//  scanf("%d",&a);
//  if(a%2==0  && a%3==0){
//     printf("div by 2 and 3\n");
//  }
//  if(a%6==0 || a%9==0){
//     printf("div by 6 or 9\n");
//  }
//   if(a%5==0 && a%4==0){
//     printf("div by 5 and 4\n");
//  }
//   if(a%3==0 || a%8==0){
//     printf("div by 3 or 8\n");
//  }
//  else{
//     printf("input is not valid");
//  }
// return 0;
// }

// print:
//  1----->10 this number is between 1 to 10 
// 11---->20 this number is between 11 to 20
// 34--->89 this number is between 34 to 89 
// #include<stdio.h>
// int main(){
//  int a;
//  printf("enter the value of a:");
//  scanf("%d",&a);
//  if(a>=1 && a<=10){
//     printf("between 1 to 10");
//  }
//  else if(a>=11 && a<=20){
//     printf("between 11 to 20");
//  }
//  else if(a>=34 && a<=89){
//     printf("between 39 to 89");
//  }
//  else{
//     printf("not match");
//  }
// return 0;
// }

//  print: user five marks input 
// all subject marks greater 36 
// 	pass
// fail

// #include<stdio.h>
// int main(){
//  int a,b,c,d,e;
//  printf("enter the marks of a ,b,c,d,e:");
//  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//  if(a>=36 && b>=36 && c>=36 && d>=36 && e>=36){
//     printf("pass");
//  }
//  else{
//     printf("fail");
//  }
// return 0;
// }

// print: user five marks input 
// all subject marks greater 36 
// 	average 
// 	total average is :...

// fail


// #include<stdio.h>
// int main(){
//  int a,b,c,d,e;
//  printf("enter the marks of a ,b,c,d,e:");
//  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//  if(a>=36 && b>=36 && c>=36 && d>=36 && e>=36){
//    printf("pass/n");
//    int avg;
//    avg = (a+b+c+d+e)/5;
//    printf("%d",avg);
//  }
//  else{
//     printf("fail");
//  }
// return 0;
// }


// user five marks input 
// all subject marks greater 40
// 	percentage...

// fail
// #include<stdio.h>
// int main(){
//  int a,b,c,d,e;
//  printf("enter the marks of a ,b,c,d,e:");
//  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//  if(a>=40 && b>=40 && c>=40 && d>=40 && e>=40){
//    printf("pass\n");
//    int add;
//    float percent;
//    add = a+b+c+d+e;
//    printf("%d \n",add);
//    percent=(add/500.0)*100;
//    printf("%f",percent);

//  }
//  else{
//     printf("fail");
//  }
// return 0;
// }

// c
// celsius 
// f---->c 
// fahrenheit
// c---f 
// The Celsius to Fahrenheit formula says °F = (9/5) °C+32. The Fahrenheit to Celsius formula says °C = (°F - 32) × 5/9.

#include<stdio.h>
int main(){
 char a;
 printf("enter value of a:");
 scanf("%c",&a);
 if(a=='f' || a=='F'){
 float celsius, fahrenheit;
 printf("\n Enter Temp in Celsius : ");
 scanf("%f", &celsius);
 fahrenheit = (1.8 * celsius) + 32;
 printf("\n Temperature in Fahrenheit : %.2f ", fahrenheit);
 }
 if(a=='c' || a=='C'){
   float celsius, fahrenheit;
 printf("\n Enter Temp in fahrenheit : ");
 scanf("%f", &fahrenheit);
  celsius = (fahrenheit - 32) * 5/9;
 printf("\n Temperature in celsius : %.2f ", celsius);
 }
 return 0;
}

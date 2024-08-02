// #include<stdio.h>
// int main(){
//     int a =50;
//     int b = 90;
//     int c;
//     printf("the value of a is : %d\n",a);
//     printf("the value of b is : %d\n",b);

// c=a;
// a=b;
// b=c;
// printf("the swap value of a is : %d\n",a);
// printf("the swap value of b is : %d\n",b);

//  return 0;
// }



#include<stdio.h>
int main(){
    int a =100;
    int b = 300;
    printf("the value of a is : %d\n",a);
    printf("the value of b is : %d\n",b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("the swap value of a is : %d\n",a);
    printf("the swap value of b is : %d\n",b);

 return 0;
}
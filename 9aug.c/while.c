#include<stdio.h>
int main(){
    int n=492;
    int rem ,sum=0;
    while(n>0){
        rem = n%10;
        sum =sum*10+rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}


// #include<stdio.h>
// int main(){
//     int n=12321;
//     int temp=n;
//     int rem ,sum=0;
//     while(n>0){
//         rem = n%10;
//         sum =sum*10+rem;
//         n=n/10;
//     }
//     if (temp==sum){
//         printf("number is pallindrome");
    
//     }
//     else{
//         printf("not pallindrome");
//     }
//     return 0;
// }
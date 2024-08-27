#include<stdio.h>
char display(char a);
float show(float b);
int main(){
    printf("%c\n",display('c'));
    printf("%f\n",show(12.45));
    return 0;
}
char display(char a){
     return a;
}
float show(float b){
    return b;
}
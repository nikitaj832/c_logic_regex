// 1 2 3 4 5 
// 2 3 4 5 6 
// 3 4 5 6 7 
// 4 5 6 7 8 
// 5 6 7 8 9
#include<stdio.h>
int main(){
    int num;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf(" %d",i+j+1);
        }
        num++;
        printf("\n");
    }
    return 0;
}
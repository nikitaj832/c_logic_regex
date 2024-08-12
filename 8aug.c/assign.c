// 1)two number maximum 
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter value of a:");
//     scanf("%d",&a);
//     printf("enter value of b:");
//     scanf("%d",&b);
//     if(a>b){
//         printf("a is maximum");
//     }
//     else{
//         printf("b is maximum");
//     }
// }


//2)three number maximum 
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter value of a:");
//     scanf("%d",&a);
//     printf("enter value of b:");
//     scanf("%d",&b);
//     printf("enter value of c:");
//     scanf("%d",&c);
//     if(a>b  && a>c){
//         printf("a is maximum");
//     }
//     else if(b>a && b>c){
//         printf("b is maximum");
//     }
//     else{
//         printf("c is maximum");
//     }
// }



// e :
// 	even number check 

// v :
// 	check voter id valid or not 

// s :
// 	seasons 

// m :
// 	marksheet 

// k :
// 	keyboard 

// c :
// 	vowel and consonant 

// input is not valid


// #include<stdio.h>
// int main(){
//    char a;
//    printf("enter value of a:");
//    scanf("%c",&a);
//    if(a=='e'){
//     int num;
//     printf("enter the number:");
//     scanf("%d",&num);
//     if(num%2==0){
//         printf("even\n");
//     }
    
//     else{
//         printf("odd\n");
//     }
//    }
//    else if(a=='v'){
//     int age;
//     printf("enter your age:");
//     scanf("%d",&age);
//     if(age>=18){
//         printf("voter id is valid");
//     }
//     else{
//         printf("voter is not valid");
//     }
//    }
//    else if(a=='s'){
//     int b;
//     printf("enter no.");
//     scanf("%d",&b);
//     if(b==1 || b==2 || b==12){
//         printf("winter");
//     }
//     else if(b==3 || b==4 || b==5 || b==6){
//         printf("summer");
//     }
//     else if(b==7 || b==8 || b==9){
//       printf("rainy");
//    }
//    else if(b==10 || b==11){
//       printf("autumn");
//    }
//   }

// else if(a=='m'){
//      int roll_n;
//     printf("enter roll_n :\n");
//     scanf("%d",&roll_n);
//     if(roll_n==784){
//         printf("STUDENT NAME : NIKITA JAIN\n");
//         printf("fname : Mahendra kumar jain\n ");
//         printf("mname: Maina jain\n");
//         printf("addres : Bhilwara\n");
//         printf("contact : xxxxxxxxxx\n");
//     int phy,chem,CA,total;
//     printf("enter the marks of phy,chem and CA\n");
//     scanf("%d %d %d",&phy,&chem,&CA); 
//     total = phy+chem+CA;
//     printf("total is :%d\n",total);
//     float per;
//     per = total/300.0*100;
//     printf("per is :%.2f\n",per);
//     if(per>=60){
//         printf("1st division");
//     }
//     else if(per>=45 && per<=60){
//         printf("2nd division");
//     }
//     else if(per<=45){
//         printf("3rd division");
//     }
//      else{
//         printf("fail");
//     }
//     }
//     else{
//         printf("student details are invalid");
//     }
// }
// else if(a=='k'){
//     char c;
//  printf("enter the value of c:");
//  scanf(" %c",&c);
//  if(c=='q' || c=='w' || c=='e' || c=='r' || c=='t' || c=='y' || c=='u' || c=='i' || c=='o' || c=='p'){
//     printf("upperline");
//  }
//  else if(c=='a' || c=='s' || c=='d' || c=='f' || c=='g' || c=='h' || c=='j' || c=='k' ||  c=='l')
//  {
//     printf("midline");
//  }
//   else if(c=='z' || c=='x' || c=='c' || c=='v' || c=='b' || c=='n' || c=='m')
//  {    
//     printf("lowerline");
//  }
//  else{
//     printf("input is nt valid");
//  }

// }
// else if(a=='t'){
//     char d;
//     printf("enter the character:\n");
//     scanf(" %c",&d);
//     if(d=='a' || d=='e' || d=='i' || d=='0' || d=='u'){
//         printf("vowel");
//     }
//     else{
//         printf("consonent");
//     }
// }
// else{
//     printf("input is invalid");
// }

//   return 0;
// }


//  s :
// 	w :with third variable number swap 
// 	o :without third variable number swap 

// input is not valid :

// #include<stdio.h>
// int main(){
//     char a;
//     printf("enter the character : ");
//     scanf(" %c",&a);
//     if(a=='s'){
//         char b;
//          printf("enter the character : ");
//          scanf(" %c",&b);
//          if(b=='o'){
//            int a,b;
//         printf("enter value of a and b :");
//         scanf("%d %d" , &a,&b);
//           a = a+b;
//           b = a-b;
//          a = a-b;
//          printf("the swap value of a is : %d\n",a);
//          printf("the swap value of b is : %d\n",b);
  
//         }
//          else if(b=='w'){
//          int a,b,c;
//         printf("enter value of a and b :");
//         scanf("%d %d" , &a,&b);
//         c=a;
//         a=b;
//         b=c;
//         printf("the swap value of a is : %d\n",a);
//         printf("the swap value of b is : %d\n",b);
  
//  }
 
//         else{
//            printf("input is not valid");
//  }
//          }
    
//     else{
//         printf("input is not valid");
//  }
        
// return 0;
// }

//while loop-->

// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     while(a<=100){
//         printf("%d\n",a);
//         a++;
//     }
//   return 0 ;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 50;
//     while(a<=100){
//         printf("%d\n",a);
//         a++;
//     }
//   return 0 ;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 45;
//     while(a<=89){
//         printf("%d\n",a);
//         a++;
//     }
//   return 0 ;
// }


// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     while(a<=10){
//         if(a%2==0){
//         printf("%d\n",a);
//         }
//         a++;
//     }
//   return 0 ;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     while(a<=100){
//         if(a%2==0){
//         printf("%d\n",a);
//         }
//         a++;
//     }
//   return 0 ;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     while(a<=10){
//         if(a%2!=0){
//         printf("%d\n",a);
//         }
//         a++;
//     }
//   return 0 ;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 50;
//     while(a<=100){
//         if(a%2!=0){
//         printf("%d\n",a);
//         }
//         a++;
//     }
//   return 0 ;
// }


// #include<stdio.h>
// int main()
// {
//     int a = 50;
//     while(a<=100){
//         if(a%2==0){
//         printf("%d\n",a);
//         }
//         a++;
//     }
//   return 0 ;
// }


// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     while(a>=1){
//         if(a%2==0){
//         printf("%d\n",a);
//         }
//         a--;
//     }
//   return 0 ;
// }


// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     while(a>=1){
//         if(a%2!=0){
//         printf("%d\n",a);
//         }
//         a--;
//     }
//   return 0 ;
// }


// #include<stdio.h>
// int main()
// {
//     int a = 89;
//     while(a>=45){
//         if(a%2!=0){
//         printf("%d\n",a);
//         }
//         a--;
//     }
//   return 0 ;
// }



// a :
// 	1--->10 number print 

// b :
// 	56--->34 number print 

// c :
// 	1---->100 even number 

// d :
// 	87----->32 odd number 

// input is not valid 

#include<stdio.h>
int main(){
    char a;
    printf("enter character:");
    scanf(" %c",&a);
    if(a=='a'){
        int a = 1;
        while(a<=10){
        printf("%d\n",a);
        a++;
       }
   }
    else if(a=='b'){
        int a = 56;
        while(a>=34){
        printf("%d\n",a);
        a--;
    }
    }
    else if(a=='c'){
        int a = 1;
        while(a<=100){
            if(a%2==0){
             printf("%d\n",a);}
            a++;
       }
   }
   else if(a=='d'){
     int a = 87;
    while(a>=32){
        if(a%2!=0){
        printf("%d\n",a);
        }
        a--;
    }
   }
   else{
    printf("input is not valid");
   }
  return 0;

}
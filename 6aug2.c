// C program to enter student marks and find percentage and grade
// A college has the following rules for the grading system:
// 5 marks (grade + %)
// 1. Below 25 – F
// 2. 25 to 45 – E
// 3. 45 to 50 – D
// 4. 50 to 60 – C
// 5. 60 to 80 – B 
// 6. Above 80 – A

// #include<stdio.h>
// int main(){
//  int total_marks;
//  float obt_marks,per;
//  printf("enter the total marks :\n");
//  scanf("%d",&total_marks);
//  printf("enter the obtained marks :\n");
//  scanf("%f",&obt_marks);
//  per = obt_marks/total_marks*100;
//  printf("%.2f\n",per);
//  if(per>=80){
//    printf("grade : A\n");
// }
// else if(per>=60 && per<=80){
//     printf("grade : B\n");
// }
// else if(per>=50 && per<=60){
//     printf("grade : C\n");
// }
// else if(per>=45 && per<=50){
//     printf("grade : D\n");
// }
// else if(per>=25 && per<=45){
//     printf("grade : E\n");
// }
// else if(per<=25){
//     printf("grade : F\n");
// }
//  else{
//     printf("marks is not valid");
//  }
// return 0;
// }

// Write a C program to read the roll no, name,fnname and marks of three subjects and calculate the total, percentage and division.
// Test Data :
// Input the Roll Number of the student :784
// student name : 
// fname:
// mname:
// address:
// contact:
// Input the marks of Physics, Chemistry and Computer Application : 70 80 90
// total: 
// precentage : % 
// division:

// #include<stdio.h>
// int main()
// {
//     int roll_n;
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
//     return 0;
// }



// print
// salalry :
// holidays (1) =full salary 
// 2-5 =5% 
// 5-14 =10% 
// 15 =50% 
// else =not salary 

// output : 
// name:
// address: 
// bank details: 
// salary : 
// alot :
//  holidays


// #include<stdio.h>
// int main(){
//     int holidays;
//     float salary;
//     printf("name : ram\n");
//     printf("addres:jaipur\n");
//     printf("bank : sbi\n");
//     printf("enter your salary\n");
//    scanf("%f", &salary);
//     printf("enter no. holidays:\n");
//     scanf("%d",&holidays);
//     if(holidays==1){
//         printf(" allotment salary is :%.2f\n",salary);
//     }
//     else if(holidays>=2 && holidays<=5){
//      float allotment;
//      allotment = salary*0.95;     //5%deduct
//      printf("allotment salary is:%.2f\n",allotment);
//     }
//      else if(holidays>=5 && holidays<=14){
//      float allotment;
//      allotment = salary*0.90;     //10%deduct
//      printf("allotment salary is:%.2f\n",allotment);
//     }
//      else if(holidays==15){
//      float allot;
//      allot = salary*0.50;     //50%deduct
//      printf("allotment salary is:%.2f\n",allot);
//     }
//     else{
//         printf("not salary");
//     }
// return 0;
// }




// electric city bill : 
// 4 unit 
// 40 
// 1- 10 = 10% 
// 11-20 =15% 
// 21-40 =30% 
// 50 =50% 

// output : 
// name:
// unit :3 
// amout 30 
// discout : 10% 
// total pay amount : 

#include<stdio.h>
int main(){
    int u;
    float amount;
    printf("ram\n");
    printf("enter unit of electric bill\n");
    scanf("%d",&u);
    amount = u*10;
    printf("amount : %.2f\n",amount);
    if(u>=1 && u<=10){
        float disc;
        disc = amount*0.1;
        printf("discount:%.2f\n",disc);
       float total_pay;
        total_pay=amount-disc;
        printf("total amount : %.2f\n",total_pay);

    }
    else if(u>=11 && u<=20){
        float disc;
        disc = amount*0.15;
        printf("discount : %.2f\n",disc);
        float total_pay;
        total_pay=amount-disc;
        printf("total amount : %.2f\n",total_pay);

    }
    else if(u>=21 && u<=40){
        float disc;
        disc = amount*0.3;
        printf("discount:%.2f\n",disc);
        float total_pay;
        total_pay=amount-disc;
        printf("total amount : %.2f\n",total_pay);

    }
    else if(u>=41 && u<=50){
        float disc;
        disc = amount*0.5;
        printf("discount : %.2f\n",disc);
        float total_pay;
        total_pay=amount-disc;
        printf("total amount : %.2f\n",total_pay);

    } 
    else{
    printf("no discount pay full amount");
    }

}

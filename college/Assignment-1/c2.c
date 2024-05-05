#include<stdio.h>
#include<stdbool.h>
bool leapYear(int year){
    if ((year % 4 ==0 && year % 100==0) || (year %4==0)){
        return true;
    }else{
        return false;
    }
}
int main()
{
    // Q-1-i
    // int num1, num2, num3,highNum;
    // printf("Enter The Three Numbers:-");
    // scanf("%d %d %d", &num1, &num2, &num3);

    // if(num1>num2 && num1>num3){
    //     highNum = num1;
    // }else if(num2>num3 && num2>num1){
    //     highNum = num2;
    // }else if(num3>num1 && num3>num2){
    //     highNum = num3;
    // }else{
    //     printf("Please Provide Correct Input or all Different Numbers");
    //     return 1;
    // }

    // printf("The greatest Number is %d\n", highNum);

    // // ii
    // int greatNum;

    // greatNum=(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);

    // printf("The Greatest Number is : %d", greatNum);

    // Q-2
    // int monthNum, totalDays, year;
    // printf("Enter The Month Number:-");
    // scanf("%d",&monthNum);

    // int firstDays = 31;
    // int secondDays = 30;

    // switch(monthNum){
    //     case 1:
    //         totalDays = firstDays;
    //         break;
    //     case 2:
    //         printf("For This You Also Required Current Year");
    //         scanf("%d",&year);

    //         if (leapYear(year))
    //             totalDays = 29;
    //         else
    //             totalDays = 28;
    //         break;
    //     case 3:
    //         totalDays = firstDays;
    //         break;
    //     case 4:
    //         totalDays = secondDays;
    //         break;
    //     case 5:
    //         totalDays = firstDays;
    //         break;
    //     case 6:
    //         totalDays = secondDays;
    //         break;
    //     case 7:
    //         totalDays = firstDays;
    //         break;
    //     case 8:
    //         totalDays = firstDays;
    //         break;
    //     case 9:
    //         totalDays = secondDays;
    //         break;
    //     case 10:
    //         totalDays = firstDays;
    //         break;
    //     case 11:
    //         totalDays = secondDays;
    //         break;
    //     case 12:
    //         totalDays = firstDays;
    //         break;
    //         default :
    //         printf("Enter Valid Month Number between 1 to 12");
    // }

    // printf("The Total No. of Days Will be in given month is %d", totalDays);

    // // Q-3
    // int checkNum;
    // printf("Enter The Number :-");
    // scanf("%d", &checkNum);

    // bool prime=true;

    // if(checkNum<2){
    //     prime = false;
    // }else if(checkNum>2){
    //     for (int i = 2; i < checkNum;i++){
    //         if(checkNum%i==0){
    //             prime = false;
    //             break;
    //         }
    //     }
    // }

    // if(prime){
    //     printf("It is a Prime Number");
    // }else{
    //     printf("It is not a Prime Number");
    // }

    // Q-4
    // int myNum,sumOfDigits=0;
    // printf("Enter The Number :- ");
    // scanf("%d",&myNum);

    // while(myNum!=0){
    //     sumOfDigits+=myNum%10;
    //     myNum /= 10;
    // }

    // printf("The Sum of the Digits of Given Integer will be:%d", sumOfDigits);

    // Q-5
    // int n;
    // int n1 = 0;
    // int n2 = 1;

    // printf("Enter The value of n ");
    // scanf("%d",&n);
 
    // for(int i=0; i<n; i++){
    //     printf("%d,",n2);
    //     int n3 = n1 + n2;
    //     n1 = n2;
    //     n2 = n3;
    // }

    // Q-6

    // int rows;
    // printf("Enter Number of Rows: ");
    // scanf("%d",&rows);

    // for (int i = 1; i <= rows;i++){
    //     for (int j = 1; j <= i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

        return 0;
}
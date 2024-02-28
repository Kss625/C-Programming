#include <stdio.h>
int main()
{
    // while loop
    // int i = 1;
    // while(i<10){
    //     printf("%d ", i);
    //     i++;
    // }

    // // do-while loop
    // int j = 1;
    // printf("\n");
    // do{
    //     printf("%d ", j);
    //     j++;
    // } while (j < 11);

    // questions based on operators + ,-,*,/

    // 1. count the digit of a given number and sum of digits

    // int newNum;
    // printf("\nEnter The Number: ");
    // scanf("%d", &newNum);

    // int copy = newNum;

    // if (newNum < 0)
    // {
    //     newNum = -newNum;
    // }
    // int digitCount = 0;
    // int sum = 0;
    // while (newNum > 0)
    // {
    //     sum += newNum % 10;
    //     digitCount++;
    //     newNum /= 10;
    // }

    // printf("\nThe Number Of digits in %d is %d\n", copy, digitCount);
    // printf("The Sum Of digits of %d is %d", copy, sum);

    // WAP to print sum of all the even digits of a given number.

    // int num;
    // printf("Enter The Number:");
    // scanf("%d", &num);

    // int count = 0;
    // int copy1 = num;
    // while(num>0){
    //     count++;
    //     num /= 10;
    // }

    // int evenSum = 0;
    // while(count!=0){
    //     if(count%2==0){
    //         evenSum += copy1 % 10;
    //     }
    //     count--;
    //     copy1 /= 10;
    // }

    // printf("The Sum Of All The Even Digits: %d",evenSum);

    // // Reverse Of a Given Number

    // int num1;
    // printf("\nEnter The Number:");
    // scanf("%d", &num1);
    // int reverseNum = 0;
    // int copyNum = num1;
    // while(num1>0){
    //     reverseNum = reverseNum * 10 + num1 % 10;
    //     num1 /= 10;
    // }
    // printf("The Reverse Of A Number: %d is %d",copyNum,reverseNum);

    // // 1-2+3-4+... upto n terms

    // int no;
    // printf("Enter The Number Of Terms:");
    // scanf("%d", &no);

    // int i = 1;
    // int sumEven = 0;
    // while(i<=no){
    //     int x=i;
    //     if(i%2==0){
    //         x = -i;
    //     }
    //     sumEven += x;
    //     i++;
    // }

    // printf("The Sum of given Series is: %d\n",sumEven);

    // factorial of given number 'n'.

    // int myfactNum;
    // printf("Enter The Number");
    // scanf("%d",&myfactNum);

    // int factorialNum = 1;
    // if (myfactNum<0){
    //     printf("The Factorial of negative number does not exist.");
    // }else if(myfactNum==0 || myfactNum==1){
    //     printf("The Factorial of %d is :%d", myfactNum, 1);
    // }else{
    //     for (int i = 1;i<=myfactNum;i++){
    //         factorialNum *= i;
    //     }
    //     printf("The Factorial of %d is :%d", myfactNum, factorialNum);
    // }

    // print first n fibonacci numbers and nth fibonacci number

    // int term;
    // printf("Enter Number Of Terms");
    // scanf("%d", &term);
    // int n1 = 0;
    // int n2 = 1;
    // int sum = 0;
    // printf("The Fibonacci Series will be:\n");
    // for (int i = 0; i < term;i++){
    //     printf("%d ", n2);
    //     sum = n1 + n2;
    //     n1 = n2;
    //     n2 = sum;
    // }
    // printf("\n%dth term of fibonacci series is %d\n",term,n1);

    // All Alphabets and their corresponding ASCII value

    printf("Capital Letters\n");
    int x = 65;
    while(x<=90){
        printf("%c=%d\n", x, x);
        x++;
    }
    printf("small letters\n");
    int y = 97;
    while(y<=122){
        printf("%c=%d\n",y,y);
        y++;
    }
    return 0;
}
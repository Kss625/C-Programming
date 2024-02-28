#include<stdio.h>
int main()
{
    int $a=5;
    int _b=10;
    printf("%d,%d\n",$a,_b);

    int a1,a2,A1;
    a1=5;
    a2=10;
    A1=9;
    printf("%d,%d,%d\n",a1,a2,A1);

    float firstNum=5;
    float secondNum=13.98;

    float sum=firstNum+secondNum;

    printf("%f\n",sum);

//  Taking Input From User In C

    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    float area=3.14*radius*radius;
    printf("The Area Of CirCle is : %f\n",area);

    // Taking Multiple User Input
    float principal,rate,time;
    printf("Enter Principal Amount,Rate and Time: ");
    scanf("%f %f %f",&principal,&rate,&time);
    float SI = (principal*rate*time)/100;
    printf("Simple Interest is : %f\n",SI);


    // Finding Sum Of Two Numbers
    float num1,num2,Twosum;
    printf("Enter Two Numbers: ");
    scanf("%f %f",&num1,&num2);
    Twosum=num1+num2;

    printf("The Sum Of %f and %f is : %f\n",num1,num2,Twosum);
    int n1=11;
    int n2=5;
    int remainder=n1%n2;
    printf("The Remainder of %d/%d is : %d\n",n1,n2,remainder);
    printf("The Remainder Of %d/%d is %d\n",2,3,(2%3));

    // printing fractional part of float numbers
    float num;
    printf("Enter a float number: ");
    scanf("%f",&num);
    int numIntPart=num;
    float floatingPoint=num-numIntPart;
    if (floatingPoint<0){
        floatingPoint=floatingPoint+1;
    }
    printf("The Fractional Part is :%f",floatingPoint);

    return 0;
}
/*
// Variables Naming Rules:-
=>Variables can start from alphabet, underscore(_) or dollar($).
=>numbers can be used in variables name after first character.
=>No Special Characters allowed except _ or $ sign.
=> no keyword are allowed as a variable name
=> prefer to use camelCase

// taking input will be done by 
int variable_name;
scanf("%d",&variable_name);
// %=stands for modulo operator which gives remainder 
*/
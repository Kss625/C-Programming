#include <stdio.h>
#include<math.h>
int main()
{
    // Question-1
    int num1 = 5;
    int num2 = 6;
    int sum = num1 + num2;
    printf("Sum Of %d and %d is %d\n", num1, num2, sum);

    // Question-2
    int myNum = 10;
    printf("%d\n", myNum);

    // Question-3
    int numCheck;
    printf("Enter The Number:");
    scanf("%d", &numCheck);

    if (numCheck % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    printf("\n");

    // Question-4
    int n;
    printf("Enter The Positive Number:");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please Enter A Positive Number");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 5)
                break;
            else
                printf("%d ", i);
        }
    }
    printf("\n");

    // Question- 5
    int n1;
    printf("Enter The Positive Number:");
    scanf("%d", &n1);

    if (n1 <= 0)
    {
        printf("Please Enter A Positive Number");
    }
    else
    {
        for (int i = 1; i <= n1; i++)
        {
            if (i == 5)
                continue;
            else
                printf("%d ", i);
        }
    }
    printf("\n");

    // Question-6=> use of static class

    // Question-7
    int f1, f2;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &f1, &f2);

    int sum1 = f1 + f2;
    int sub = f1 - f2;
    int mul = f1 * f2;
    int divide = f1 / f2;

    printf("Sum is :%d\n Difference is :%d\n Product is :%d\n Quotient is:%d\n", sum1, sub, mul, divide);

    // Question-8
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
        printf("Leap Year");

    else
        printf("Not a leap year");

    // Question-9
    int day;
    printf("Enter Day Number: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Not a valid Day Number");
    }

    // Question 10 - pyramid Question

    // Question 11
    int f1,f2;
    printf("Enter Two Numbers(a and b):");
    scanf("%d %d", &f1,&f2);
    printf("Currently a=%d and b=%d:\n",f1,f2);
    int temp = f1 + f2;
    f1 = temp - f1;
    f2 = temp - f2;
    printf("After Swapping a=%d and b=%d:",f1,f2);

    // Question -12
    int n1, n2, n3;
    printf("Enter Three Numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2 && n1>n3 && (n3!=n2)){
        printf("%d is greatest", n1);
    }
    else if (n2 > n1 && n2 > n3 && (n3 != n1))
    {
        printf("%d is greatest", n2);
    }
    else if (n3 > n1 && n3 > n2 && (n2 != n1))
    {
        printf("%d is greatest",n3);
    }
    else
    {
        printf("We need different numbers");
    }

    // Question -13
    int numfact;
    printf("Enter Number for factorial:");
    scanf("%d",&numfact);

    int factorial = 1;
    if(numfact<0) printf("For Negative numbers Factorial not possible.");
    else if(numfact==0 || numfact==1){
        printf("%d != %d", numfact, factorial);
    }else{
        for (int i = 1; i <= numfact; i++)
        {
            factorial *= i;
        }
        printf("%d ! = %d",numfact, factorial);
    }

    // Question-14
    
    for (int i = 3; i < 51;i++){
        int prime = 1;
        for (int j = 2; j < i;j++){
            if(i%j==0){
                prime = 0;
                break;
            }
        }
        if(prime==1){
            printf("%d ", i);
        }
    }

    // Question-15 use of extern storage class

    // Question- 16
    double radius;
    printf("Enter Radius Of Circle:");
    scanf("%lf",&radius);

    double area = M_PI * radius * radius;
    printf("Area of Circle is %lf", area);

    // Question-17
    int squareNum;
    printf("Enter Your Number:");
    scanf("%d",&squareNum);

    float squareRoot=sqrt(squareNum);
    if(squareRoot==(int)(squareRoot)){
        printf("Perfect Square");
    }else{
        printf("Invalid Perfect Square");
    }

    // Question-18
    int num1, num2;
    
    printf("Enter Two Numbers:");
    scanf("%d %d",&num1,&num2);
    char operator;
    printf("Enter The Operator");
    scanf(" %c",&operator);
    int result;
    switch (operator)
    {
    case '+':
        result=num1+num2;
        break;
    case '-':
        result=num1-num2;
        break;
    case '*':
        result=num1*num2;
        break;
    case '/':
        result=num1/num2;
        break;
    default:
        printf("Invalid operator");
        return 1;
    }

    printf("result is %d", result);

    // Question-19
    int arr[5] = {2, 4, 5, 8, 9};
    int brr[5];

    for (int i = 0; i < 5;i++){
        brr[i] = arr[i];
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", brr[i]);
    }

    // Question- 20

    float pi, rate, time;
    printf("Enter Principle Amount,Interest Rate,Time:");
    scanf("%f %f %f", &pi,&rate,&time);

    float compoundInterest = (pi) * (pow((1 + rate / 100), time)-1);
    printf("Compound Interest Will be %f\n", compoundInterest);

    

    return 0;
}
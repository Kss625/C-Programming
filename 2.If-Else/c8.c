#include <stdio.h>
int main()
{
    // Logical Operators &&,|| and !
    // Check Given Number is Divisible by both 5 and 7,either 5 or either 7,neither 5 nor 7

    int num;
    printf("Enter The Number: ");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 7 == 0)
    { // also write (num%35==0)
        printf("%d is Divisible by Both 5 and 7\n", num);
    }
    else if (num % 5 == 0 || num % 7 == 0)
    {
        printf("%d is Divisible by Either 5 or 7\n", num);
    }
    else
    {
        printf("%d is Neither Divisible by 5 nor 7\n", num);
    }

    // check given number is 3 digit or not
    int n;
    printf("Enter A number :");
    scanf("%d", &n);
    if (n >= 100 && n <= 999)
    {
        printf("%d is 3 digit Number\n", n);
    }
    else
    {
        printf("%d is not a 3 digit number\n", n);
    }

    // Take 3 positive Integers input and print the greatest of them,also smallest of them

    int a, b, c;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is Greatest", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is Greatest", b);
    }
    else if (c > a && c > b)
    {
        printf("%d is Greatest", c);
    }
    else
    {
        printf("Please Use Correct Input");
    }

    printf("\n");

    //  example of nested if else

    if(a>b){//a race se bahar
        if(b>c){// b race se bahr
            printf("%d is smallest", c);
        }else{// c race se bahr
            printf("%d is smallest", b);
        }
    }else{// b race se bahr
        if(a>c){//a race se bahr
            printf("%d is smallest", c);
        }else{//c race se bahr
            printf("%d is smallest", a);
        }
    }

    // take 3 numbers input and tell if they can be the sides of  a triangle

    int a1, b1, c1;
    printf("\nEnter Three Numbers: ");
    scanf("%d %d %d", &a1, &b1, &c1);

    if((a+b)>=c && (b+c)>=a && (c+a)>=b){
        printf("It Can be Possible Sides Of Triangle\n");
    }else{
        printf("Cannot Be Possible Sides Of Triangle\n");
    }

    // number is divisible 5 or 3 but not by 15
    int myNum;
    printf("Enter The Number");
    scanf("%d",&myNum);
    if (myNum%5==0 || myNum%3==0){
        if(myNum%15!=0){
            printf("%d is divisible by either 5 or 3 but not by 15",myNum);
        }else{
            printf("%d is divisible by 15",myNum);
        }
    }else{
        printf("%d is not divisible by neither 5 nor 3",myNum);
    }

    //  for printing single lines
    int test = 2;
    printf("\n");
    if(test==2)
        printf("good morning");
    else
        printf("good evening");

    return 0;
}
// preference order !>&&>||

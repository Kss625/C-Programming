#include <stdio.h>
void greet()
{ // function declaration without parameters
    printf("Good Morning\n");
    printf("How are You ?\n");
    return;
}
int minimum(int a, int b)
{ // function declaration with parameters
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
void england()
{
    printf("You Are in England\n");
    return;
}
void australlia()
{
    printf("You Are in Australia\n");
    england();
    return;
}
void india()
{
    printf("You Are in India\n");
    australlia(); // calling australlia function
    return;
}

int Sum(int f1, int f2)
{
    return f1 + f2;
}

int main()
{
    greet(); //  function call
    printf("Again Function Call\n");
    greet();

    int min = minimum(3, 5); // function call with arguments
    printf("Minimum is %d\n", min);

    india();

    int a, b;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);

    int sum = Sum(a, b); // this is called pass by value
    printf("Sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
// function order should be from top to bottom
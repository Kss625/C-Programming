#include <stdio.h>
// Recursion

int factorial(int n)
{ // Basic Example
    if (n == 1 || n == 0)
    { // This is Called Base-Case
        return 1;
    }
    else if (n < 0)
    {
        return -1;
    }
    return (n * factorial(n - 1));
}

void decreaing(int n)
{ // print n to 1
    if (n == 1)
    {
        printf("%d\n", n);
        return;
    }
    printf("%d\n", n);
    decreaing(n - 1);
    return;
}

void increasing(int x, int n)
{ // 1 to n using extraa parameter

    if (x > n)
    {
        return;
    }
    printf("%d\n", x);
    increasing(x + 1, n);
    return;
}

int main()
{

    int f1;
    printf("Enter The Number: ");
    scanf("%d", &f1);
    int result = factorial(f1);
    if (result >= 0)
        printf("%d! = %d\n", f1, result);
    else
        printf("Factorial For Negative Number Does Not Exist\n");

    // n to 1
    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);

    decreaing(n);
    increasing(1, n);

    return 0;
}
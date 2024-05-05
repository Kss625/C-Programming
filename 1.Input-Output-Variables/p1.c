#include<stdio.h>
int main()
{
    // using printf function in c language
    printf("Hello World \nin C language ");
    printf("By Sushant Kumar\n");
    printf("in VS CODE\n");

    //Q-1
    printf("nn\n\nnn\n"); // question-1
    printf("nn/n/nnn/n");
   

    // Let's Learn About Variables

    // 1.Variable as Container

    int a = 5;
    int b;
    b = 10;

    printf("\na = %d\nb = %d\n", a,b);// using format specifier to print variables

    float c = 3.6;
    printf("%f\n", c);

    // 2.update the variables value
    a = 10;
    printf("%d\n", a);

    // 3.upadating the variables value using old values
    b = b + 78;
    printf("%d\n", b);

    // Arithmetic operations on data types
    int x = 10;
    int y = 6;
    printf("ADD %d\n", (x + y));
    printf("SUB %d\n", (x - y));
    printf("MUL %d\n", (x * y));
    printf("DIV %d\n", (x / y));
    printf("REM %d\n", (x % y));

    int myInt = 7.54 / 2;// myInt will store only int value if float value is given
    float myFloat = 7.54 / 2;
    float myInt2 = 4 / 2;// gives int value but stores as a float value

    printf("%d,%f,%f\n", myInt,myInt2,myFloat);

    double myDouble = 4.789;
    printf("%lf", myDouble);
    return 0;
}
// \n(backslash n)is used to break the line also one of the example of escape sequences
//ANS-1
// nn 

// nn 
// nn/n/nnn/n

// %d(for integer),%f(for float values),%lf(for double data type) is called format specifier

// int/int gives integer value. while int/float or float/int or float/float gives float value
// any operations with float value gives float value as a result

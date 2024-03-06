#include<stdio.h> // header file
int main()
{
// Introduction to variables
    int x;
    x=5;   // variables as a container used to store value
    int y=10;

    printf("x=%d,y=%d\n",x,y); // variables can be used or access later

    x=14;  // variables value can be changed later
    printf("x=%d,y=%d\n",x,y);

    x=x+5;// update the value of value of x using previous value of x
    printf("x=%d,y=%d\n",x,y);

    int z = 7.9;     // z takes integer part of given float number
    printf("%d\n",z);

    int a=11;
    int b=5;
    printf("%d\n",(a+b));
    printf("%d\n",(a-b));
    printf("%d\n",(a*b));
    printf("%d\n",(a/b));// gives integer

//  float data type
    float c=11.4;
    float d=2;

    printf("%f\n",(c*d));
    printf("%f\n",(c/d));

    float m=5/2;//integer divided by integer gives integer part
    printf("%f\n",m);

    int n=5.0/2;// gives 2.5 but due to int data-type it stores integer part
    printf("%d\n",n);

    return 0;
}
/* =>Syntax of declaring variables
 data_type variable_name=value;
=>"%d" is used for print Integer value
=> integer divided by integer gives integer part,5/2=2,
   note:-5.0/2=2.5

=> "%f" is used for print decimal values
=> operation between float and int gives float hence we use %f to print this.
 */

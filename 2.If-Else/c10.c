#include<stdio.h>
#include <stdbool.h>
int main()
{
    // predict the output
    int x = 10, y = 20;// Q-1
    if(x==y);
        printf("\n%d %d", x, y);// 10 20

    int x1 = 3, y1 = 5;// Q-2
    if(x1==3)
        printf("\n%d", x1);
    else;// else ka part yaha end ho gaya
        printf("\n%d", y1);// ye else se independent hain
    // 3
    // 5
    // Q-3
    int num = 3;
    float num1 = 3.0;
    if(num==num1){
        printf("\n both are equal");
    }else{
        printf("\n both are not equal");
    }

    int a1 = 3, a2, a3;
    a2 = a1 = 10;
    a3 = a1 < 10;
    printf("\nx=%d y=%d z=%d",a1,a2,a3);

    bool m = true;
    bool n = false;
    printf("\ntrue equivalent to=%d\nfalse equivalent to=%d",m,n);

    int i = 65;
    char j = 'A';

    if(i==j){// compare their ascii value with integers
        printf("\nWOW");
    }else{
        printf("\nC is a Headache");
    }

    // The Real Thing
    if(3+2%5){// actually this is not condition it check the expression and work for true value
        printf("\nThis Works");
    }
    // any integer value except 0 is true for expression
    // for any character also it works

    return 0;
}
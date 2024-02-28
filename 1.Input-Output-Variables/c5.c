#include<stdio.h>
int main()
{
    // Hierarchy of Operators
    int i=2*3/4+4/4+8-2+5/8;
    printf("%d\n",i);
    int I=2,j=3,k,l;
    // float me 6 decimal point tak aata hain
    float a,b;
    k=I/j*j;
    l=j/I*I;
    a=I/j*j;
    b=j/I*I;
    printf("%d %d %f %f\n",k,l,a,b);

    //  char data type
    char ch;
    printf("Enter The Character:-");
    scanf("%c",&ch);
    printf("%c\n",ch);
    printf("ASCII VALUE OF %c is %d\n",ch,ch);
    // %d of character gives ASCII value of first character
    // MCQ'S
    //1.option 4
    // 2.option 1
    // 3.option 1
    // 4. option 1
    // int a=5/2 then a is 2
    // 5. option 4
    // 6.Range of short data types is -32768 to 32767
    // short take 2 bytes means 16 bits hence can contains 2**16=65,536 numbers can be stored.range is 2**15 to 2**15-1
    // int take 4 byte means 32 bits hence can contain 2**32=4294967296 numbers can be stored.range is 2**31 to 2**31-1
    // long take 8 byte means 64 bits hence can contain 2**64=18,446,744,073,709,551,615 numbers can be stored.range is 2**63 to 2**63-1
   
    // Range of int data types is 

    int t1=30*1000+2768;
    short t2=30*1000+2768;
    printf("in integer=%d in short=%d\n",t1,t2);
    printf("%d\n",(4+2%-8));//2%-8 gives 2
    printf("%f\n",2/7.0);
    return 0;
}
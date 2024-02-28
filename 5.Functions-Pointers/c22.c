#include <stdio.h>
int a = 10; // global scope variable
void swap(int a,int b){
    int temp = a;
    a=b;
    b = temp;
    return;
}
void scope(){
    printf("%d", a);
    return ;
}
void swapping(int* a,int* b){// address ko lene ke liye pointer istemaal karenge
    int temp = *a;// jiska address store kar raha hain uska value store karega
    *a = *b;
    *b = temp;
    return;
}
int Min(int a, int b) {
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int gcd(int a, int b) {
    int hcf;
    // for (int i = 1; i <= Min(a, b);i++){// sidha loop
    //     if(a%i==0 && b%i==0){
    //         hcf = i;
    //     }
    // }
    for (int i = Min(a,b);i>=1; i--)// ulta loop
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main()
{
    // pass by value and pass by reference

    // int a, b;// inka scope main function me hi rahega
    // printf("Enter a and b: ");
    // scanf("%d %d", &a,&b);

    // swap(a, b);// we just put their values not a and b ke dabbe

    // printf("a=%d", a);
    // printf("b=%d", b);

    // scope();

    // pointers-variable ka address store karta hain

    // int x = 5;
    // printf("%p\n", &a);//print address
    // printf("%d\n", *x);

    // int* y = &x;// store address
    // printf("%p\n", y);// pointer ka address

    // int a = 5;
    // int* x = &a;// ek pointer jisme a ka address store hain

    // printf("%p\n", x);//a ka address
    // printf("%p\n", &x);
    // printf("%d\n", *x);// pointing to the value at which it is stored

    // *x = 10;// pointer ki madad se dusre value ko bhi change kar skte hain
    // printf("%d\n", a);

//  pass by reference

    // int f1 = 6;
    // int f2 = 8;

    // swapping(&f1, &f2);// passes the address 

    // printf("%d %d\n", f1, f2);// now it swapes

    // // double pointer

    // int n = 25;
    // int *p = &n;

    // int **p1 = &p;// int* ka address store karta hain

    // printf("%p %p\n",&p,p1);
    // printf("%d\n", **p1);

    // HCF or greatest common divisor

    int n1, n2;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &n1,&n2);

    int hcf = gcd(n1, n2);
    printf("THE HCF/GCD of %d and %d is: %d", n1, n2, hcf);

    return 0;
}
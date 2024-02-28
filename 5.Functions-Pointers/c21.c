#include<stdio.h>
#include<math.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

float combination(float n, float r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

float permutation(float n, float r){
    return (factorial(n) / (factorial(n-r)));
}

// void pascalTriangle(float n, float r){// Inefficient Method
//     for (int i = 0; i <=n;i++){
//         for (int j = 0; j <=i;j++){
//             printf(" %d ",(int)(combination(i,j)));// 1st way
//         }
//         printf("\n");
//     }
// }

void pascalTriangle(float n, float r)
{
    for (int i = 0; i <= n; i++){
        int first = 1;
        for (int j = 0; j <=i; j++)
        {
            printf("%d ", first);
            first=first*(i-j)/(j+1);// nCr+1=nCr*(n-r)/(r+1)
        }
        printf("\n");
    }
}

void swapping(int a,int b){// without third variables
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping\n");
    printf("a=%d b=%d\n",a,b);
}

int main()
{
    // library functions
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int root=sqrt(a);
    printf("The Square Root is: %d", root);
    int power = pow(2, 5);
    printf("\nPower of 2 raise to 5 is %d\n", power);

    void fun();// function prototype-isse daalne se function kahi bhi ho call kar skte hain
    fun();
    void india();
    india();

    // combination and permutation

    int fnum,r;
    printf("Enter n and r for combination: ");
    scanf("%d %d", &fnum, &r);

    float combinationResult = combination(fnum, r);
    printf("combination is: %f", combinationResult);

    float permutationResult = permutation(fnum, r);
    printf("permutation is: %f\n", permutationResult);

    // pascal triangle

    pascalTriangle(5, 4);

    // ultimate method for pascal triangle


    swapping(5, 3);

    return 0;
}

void fun(){
    printf("\nHello, World!\n");
}
void india()
{
    printf("You Are in India\n");
    void australlia();
    australlia(); // calling australlia function
    return;
}
void england()
{
    printf("You Are in England\n");
    return;
}
void australlia()
{
    printf("You Are in Australia\n");
    void england();
    england();
    return;
}



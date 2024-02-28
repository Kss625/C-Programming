#include <stdio.h>

int nthfibonacciNum(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    return nthfibonacciNum(n - 1) + nthfibonacciNum(n - 2);
}

int starirPath(int n)
{ //  no of  ways , so that the person reaches nth stair

    if (n == 1 || n == 2)
    { // only single and double step are available
        return n;
    }
    return starirPath(n - 1) + starirPath(n - 2);
}
int aRaisedTob(int a,int b){
    if(b==0)
        return 1;
    if (b==1){
        return a;
    }
    int ans = aRaisedTob(a, b / 2);
    if(b%2==0){
        return ans * ans;
    }else{
        return ans * ans * a;
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d\n", nthfibonacciNum(n));

    int stair;
    printf("Enter a number:");
    scanf("%d", &stair);
    printf("%d\n", starirPath(stair));

    int a, b;
    printf("a,b:");// logarithmic
    scanf("%d %d", &a,&b);

    printf("%d raised to %d is %d:\n",a,b, aRaisedTob(a, b));

    return 0;
}
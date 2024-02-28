#include<stdio.h>
void increasing(int n)
{ // print 1 to n 
    if (n == 1)
    {
        printf("%d\n", n);
        return;
    }
    increasing(n - 1);
    printf("%d\n", n);
    return;
}

void decAndInc(int n){
    if(n==1){
        printf("%d\n", n);
        return;
    }
    printf("%d\n", n);
    decAndInc(n - 1);
    printf("%d\n", n);
}

void sumParameter(int n,int sum){//sum from 1 to n (parameterized)
    if(n==0){
        printf("%d\n", sum);
        return;
    }
    sumParameter(n - 1, sum + n);
    return;
}
int anothersum(int n){
    if(n==1){
        return n;
    }
    return n+anothersum(n-1);
}
int aRaisedTob(int a,int b){
    if(b==0){
        return 1;
    }
    return a * aRaisedTob(a, b - 1);
}

int main(){

    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);

    // increasing(n);
    // decAndInc(n);
    sumParameter(n,0);
    int result=anothersum(n);
    printf("%d\n", result);

    int a, b;
    printf("a,b:");
    scanf("%d %d",&a,&b);
    int result2 = aRaisedTob(a,b);
    printf("%d raised to %d is %d\n",a,b, result2);

    return 0;
}
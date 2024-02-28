#include <stdio.h>
int main()
{
    // for loop
    // printing hello world n times , take n from user
    // int n;
    // printf("n=");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Hello World\n");
    // }

    // // printing first  even number upto n numbers
    // int n1 = 100;
    // printf("Even Number\n");
    // for (int i = 1; i < n1 + 1; i++)
    // { // using loop with conditions statements
    //     if (i % 2 == 0)
    //     {
    //         printf("%d ", i);
    //     }
    // }
    // printf("\n");
    // // priint the table of given number
    // int myNum;
    // printf("Enter The Number: ");
    // scanf("%d", &myNum);

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%dx%d=%d\n", myNum, i, (myNum * i));
    // }

    // // Display AP 1,3,5.. upto n terms
    // int noOfTerms;
    // printf("Enter The Number Of Terms: ");
    // scanf("%d", &noOfTerms);
    // for (int i = 1; i <= (2 * noOfTerms - 1); i = i + 2)
    // {
    //     printf("%d\n", i);
    // }
    // printf("Another way");
    // int a = 4;
    // for (int i = 1; i <= noOfTerms; i++)
    // {
    //     printf("%d\n", a);
    //     a = a + 3;
    // }
    // // print 100,97,94... upto +ve terms
    // int num2 = 100;
    // for (int i = 1; num2 > 0; i++)
    // {
    //     // if(num2>0){ //without condition in for expression
    //     //     printf("%d\n", num2);
    //     //     num2=num2-3;
    //     // }else{
    //     //     break;
    //     // }
    //     printf("%d ", num2); // with condition
    //     num2 = num2 - 3;
    // }


    // check given number is prime or not
    // int pNum;
    // printf("Enter The Number To Check: ");
    // scanf("%d", &pNum);

    // int test = 1;
    // if(pNum<=1){
    //     test = 0;
    // }else if(pNum>1){
    //     for (int i = 2; i <= pNum - 1;i++){
    //         if(pNum%i==0){
    //             test = 0;
    //             break;// it is used to terminate the current loop
    //         }
    //     }

    // }

    // if(test==1){
    //     printf("Prime Number");
    // }else if(test==0){
    //     printf("Not a Prime Number");
    // }

    // print first prime number upto n 
    int lastDigits;
    printf("\nEnter The last Digit: ");
    scanf("%d",&lastDigits);
    
    
    for (int i = 2;i<=lastDigits;i++){
        int mt = 1;
        for (int j = 2; j < i - 1;j++){
            if(i%j==0){
                mt = 0;
                break;
            }
        }
        if(mt==1){
            printf("%d ",i);
        }
    }

        return 0;
}
#include<stdio.h>
int main()
{
    // Take Positive Number and check it is even or odd
    int num;
    printf("Enter The Positive Number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("Even number\n");
    }
    if(num%2!=0){
        printf("Odd Number\n");
    }
    // Alternate way to check 
    if(num%2==0){
        printf("This is a Even Number\n");
    }else{
        printf("This is a Odd Number\n");
    }
    
    return 0;
}
#include <stdio.h>
#include<limits.h>
int main()
{
    int marks[10] = {95, 90, 31, 25, 100, 50, 65, 89, 30, 97};

    for (int i = 0; i < 10; i++)
    {
        if (marks[i] <= 35)
        {
            printf("Roll no. is %d for marks %d\n", i, marks[i]);
        }
    }
    // memory allocation in arrays
    int arr[5] = {91, 81, 71, 61, 50};
    // the difference between their address of elements in arrays is 4 bytes
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
    printf("%p\n", &arr[3]);
    printf("%p\n", &arr[4]);

    // garbage values
    int arr1[4];
    printf("%d", arr1[0]);

    // sum of all the elements in a given array

    // int myArr[5] = {1, 2, 3, 4, 5};
    // int sum = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     sum += myArr[i];
    // }
    // printf("\nsum: %d", sum);

    // product of all the elements in a given array
    // int size;
    // printf("\nEnter The Size Of The Array: ");
    // scanf("%d", &size);

    // for (int i = 0;i<size;i++){
    //     scanf("%d", &myArr[i]);
    // }

    // int product = 1;
    // for (int j = 0; j < size;j++){
    //     product*=myArr[j];
    // }
    // printf("Product Of All The Elements in Arrays is: %d", product);

    // maximum value out of all the elements in the array

    int myArr[5] = {-1, -2, -4, 7, 8};
    int maximumValue =INT_MIN;// sabse minimum value in C language
    int minimumValue = INT_MAX;
    for (int i = 1; i < 5; i++)
    {
        if(myArr[i] > maximumValue){
            maximumValue = myArr[i];
        }
        if(myArr[i] < minimumValue){
            minimumValue = myArr[i];
        }
    }
    printf("\nMaximum Value is %d", maximumValue);
    printf("\nMinimum Value is %d", minimumValue);
    



    return 0;
}
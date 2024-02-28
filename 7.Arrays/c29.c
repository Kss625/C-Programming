#include <stdio.h>
#include <limits.h>
// passing array to functions
void fun(int *x)
{ // pass by reference
    *x = 10;
    return;
}
void fun2(int x[])
{ // Array will be pass by reference without a pointer
    x[0] = 100;
    return;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d\n", arr[0]);
    fun2(arr);
    printf("%d\n", arr[0]);
    int b = 4;
    fun(&b);
    printf("%d\n", b);

    // find the total numbe of pairs in the array whose sum is equal to the given value x
    int testArr[5] = {2, 4, 1, 3, 2};
    int targetSum = 5;
    int noOfPairs = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (testArr[i] + testArr[j] == targetSum)
            {
                printf("{%d,%d},", testArr[i], testArr[j]);
                noOfPairs++;
            }
        }
    }
    printf("\nNo. Of Pairs Will be: %d\n", noOfPairs);

    // count the number the triplets whose sum is equal to the given value of x
    int myArray[6] = {2, 3, 4, 2, 3, 8};
    int targetSum1 = 7;
    int noOfTriplets = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            for (int k = j + 1; k < 6; k++)
            {
                if (myArray[i] + myArray[j] + myArray[k] == targetSum1)
                {
                    printf("{%d, %d, %d}", myArray[i], myArray[j], myArray[k]);
                    noOfTriplets++;
                }
            }
        }
    }
    printf("\nNumber Of Triplets: %d\n", noOfTriplets);

    // find the second largest element in the given Array.
    // first find maximum value
    // for second max condition will be same with element!=max value

    int finalArr[5] = {-1, 90, -2, -1, 11};
    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        if (max < finalArr[i])
        {
            smax = max; // this will be use when we don't want another loop
            max = finalArr[i];
        }
        else if (smax < finalArr[i])
        { // max>finalArr[i]
            smax = finalArr[i];
        }
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     if(finalArr[i]!=max && smax<finalArr[i]){
    //         smax = finalArr[i];
    //     }
    // }
    printf("\nSecond Maximum Value will be: %d\n", smax);

    return 0;
}
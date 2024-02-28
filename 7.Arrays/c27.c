#include <stdio.h>
// Arrays

int main()
{
    int a[5] = {2, 4, 5, 6, 7};

    for (int i = 0; i < 5; i++)
    {
        printf("At index %d value is %d\n", i, a[i]);
    }
    a[2] = 100;
    printf("%d\n", a[2]);

    float b[3] = {1.2, 3.4, 5.7};
    for (int i = 0; i < 3; i++)
    {
        printf("At index %d value is %f\n", i, b[i]);
    }

    int arr[3];
    arr[0] = 12;
    arr[1] = 13;
    arr[2] = 14;

    int arr1[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Element for index %d=", i);
        scanf("%d", &arr1[i]);
    }
    printf("\nThe Element Of Array is\n");
    for (int i = 0; i < 5; i++)
    {
        printf("At index %d value is %d\n", i, arr1[i]);
    }

    return 0;
}
// array elements can be accessed using index value, index-> 0,1,2,3,4..
// array elements can be updated-array is mutable

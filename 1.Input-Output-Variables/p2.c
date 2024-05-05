#include <stdio.h>
int main()
{
    // 1.Volume of Sphere
    printf("Enter The Radius of the Sphere:-");
    float radius;
    scanf("%f", &radius);

    float Volume = (4 * 3.14 * radius * radius * radius) / 3;
    printf("Volume of Sphere is : %f\n", Volume);

    

    return 0;
}
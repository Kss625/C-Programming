#include <stdio.h>
int main()
{
    // check given three points lie on a straight line
    float x1,y1,x2,y2,x3,y3;
    printf("Enter Coordinates of First Point: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter Coordinates of Second Point: ");
    scanf("%f %f", &x2, &y2);
    printf("Enter Coordinates of Third Point: ");
    scanf("%f %f", &x3, &y3);

    float slope1 = (y2 - y1) / (x2 - x1);
    float slope2 = (y3 - y2) / (x3 - x2);

    if(slope1==slope2){
        printf("All Three Points Lie On a Straight Line.");
    }else{
        printf("Not Lie On a Straight Line");
    }
    // check given point lie on x axis,y axis or in plane
    int a, b;
    printf("\nEnter The Coordinates");
    scanf("%d %d",&a,&b);
    if(a==0 && b==0){
        printf("Point Lies On Origin");
    }else if(a==0){
        printf("Point Lies On Y axis");
    }else if(b==0){
        printf("Point Lies On X axis");
    }else{
        printf("Point Not Lies On x and Y axis");
    }

    // ternary operator

    int f1 = 9;
    int f2 = 8;
    f1 > f2 ? printf("%d is greatest than %d", f1, f2) : printf("%d is greatest than %d", f2, f1);

    return 0;
}
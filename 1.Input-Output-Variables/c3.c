#include<stdio.h>
int main()
{
    // Volume Of Sphere
    float r=2.5;
    float pi=3.14159;
    float V=(4*pi*r*r*r)/3;
    printf("Volume of Sphere Of Radius=%f is Equal to %f\n",r,V);
    // Volume Of Area Of Circle of given radius
    float A=pi*r*r;
    printf("The Area Of CirCle Of Radius=%f is %f\n",r,A);
    // percentage of 5 Subjects
    float x1=95;//math score
    float x2=95;// phy score
    float x3=95;// chem score
    float x4=95;//computer science score
    float x5=76;//english score
    float percentage=(x1+x2+x3+x4+x5)/5;
    printf("The Percentage of 5 Subjects will be %f\n",percentage);
    
    return 0;
}
// print percentage of 4 subjects where marks are out of 40
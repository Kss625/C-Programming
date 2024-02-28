#include<stdio.h>
int main()
{
//  Check Given Number is Divisble By 5 or not
    int num;
    printf("Enter The Number: ");
    scanf("%d",&num);
    if(num%5==0){
        printf("Given number %d is divisible by 5\n",num);
    }else{
        printf("Given NUmber %d is not divisible by 5\n",num);
    }
//  check Given Year is a leap year or not
    int year;
    printf("Enter The Year: ");
    scanf("%d",&year);
    if(year%4==0){
        if (year%100==0){
            if (year%400==0){
                printf("Given Year %d is a leap year.\n",year);
            }else{
                printf("Given Year %d is not a leap year.\n",year);
            }
        }else{
            printf("Given Year %d is a leap year.\n",year);
        }
    }else{
        printf("Given Year %d is not a leap year.\n",year);
    }
    // Take Integer input and print absolute variables
    int myNum;
    printf("Enter The Integer:\n");
    scanf("%d",&myNum);
    int absValue=0;
    if (myNum<0){
        absValue=(-myNum);
    }else{
        absValue=myNum;
    }
    printf("The Absolue Value OF %d is %d \n",myNum,absValue);

    // Cost Price and Selling Price
    int costPrice,sellingPrice;
    printf("Enter Cost Price: \n");
    scanf("%d",&costPrice);
    printf("Enter Selling Price: \n");
    scanf("%d",&sellingPrice);
    int result=sellingPrice-costPrice;
    if (costPrice>sellingPrice){
        printf("Currently,You Made Loss Of Rs.%d\n",(result*(-1)));
    }else if(sellingPrice>costPrice){
        printf("Hurray, You Made Profit Of Rs.%d\n",(result));
    }else if(costPrice==sellingPrice){
        printf("Nor Profit Nor Loss");
        result=0;
    }else{
        printf("Please Enter Correct Input");
    }

    // check whether area > perimeter for rectangle
     int length,breadth,area,perimeter;
     printf("Enter Length And Breadth Of Rectangle:");
     scanf("%d %d",&length,&breadth);
     area=length*breadth;
     perimeter=2*(length+breadth);

    printf("This Relation calculated as Numerically.\n")
     if(area>perimeter){
        printf("Yes,Area is Greater Than Perimeter.\n");
     }else if(perimeter>area){
        printf("No,Perimeter is Greater Than Area.\n");
     }else{
        printf("Area is Equal to Perimeter.\n");
     }
    
    return 0;
}
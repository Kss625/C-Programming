#include<stdio.h>

void starRectangle(int rows,int cols){

    for (int i = 1; i <= rows; i++)// signifies number of lines
    {
        for (int j = 1; j <= cols; j++)// signifies for each line
        {
            printf("*");
        }
        printf("\n");// har line ke baad enter ke liye hain
    }
    return;
}
void numbersquare(int n){
    for (int i = 1;i<=n;i++){
        for (int j = 1; j <= n;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}
void starTriangle(int rows){
    for (int i = 1;i<=rows;i++){
        for (int j = 1; j <= i;j++){
            printf("*");
        }
        printf("\n");
    }
}
void strTriInverted(int rows){
    // for (int i = rows; i >= 1;i--){// 1st method
    //     for (int j = 1; j <= i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    for (int i = 1;i<=rows;i++){
        for (int j = 1;j <= (rows+1-i);j++){// 2nd Method
            printf("* ");
    }
    printf("\n");
    }
}
void numTri(int rows){
    for (int i = 1;i<=rows;i++){
        for (int j = 1; j <=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void numTriInverted(int rows){
    for (int i = 1;i<=rows;i++){
        for (int j = 1; j <= (rows + 1 - i);j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}
void oddNumTri(int rows){
    // for(int i = 1;i<=rows;i++){
    //     for (int j = 1; j < (2 * i - 1);j+=2){
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }
    // using third variable
    for (int i = 1; i <= rows; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j ++)
        {
            printf("%d ", a);
            a += 2;
        }
        printf("\n");
    }
}
void alphaSquare(int rows){
    for (int i = 1;i<=rows;i++){
        char alpha = 'A';
        for (int j = 1;j<=rows;j++){
            printf("%c ", alpha);
            alpha++;
        }
        printf("\n");
    }
}
void alpAndNum(int rows){
    for (int i = 1;i<=rows;i++){
        if(i%2==0){
            int alpha = 'A';
            for(int j = 1;j<=i;j++){
                printf("%c ", alpha);
                alpha++;
            }
            printf("\n");
        }
        else{
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
}

void starPlus(int rows){
    if(rows%2==0){
        printf("Not Possible for even number of rows");
    }else{
        for (int i = 1;i<=rows;i++){
            if(i==((rows+1)/2)){
                for (int j = 1; j <= rows; j++)
                {
                    printf("*");
                }
                printf("\n");
            }else{
                for (int j = 1; j <= rows; j++)
                {
                    if (j == ((rows + 1) / 2))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }

        }
    }
}
void hollowRectangle(int rows,int columns){
    for (int i = 1;i<=rows;i++){
        if(i==1 || i==rows){
            for (int j = 1;j<=columns;j++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for (int j = 1;j<=columns;j++){
                if(j==1 || j==columns){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}
void starCross(int rows,int cols){// rows number should be odd
    for (int i = 1; i <= rows;i++){
        for (int j = 1;j<=rows;j++){
            if((i+j)==rows+1 || i==j){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{
    // Pattern Printing
    int rows, cols;
    printf("Enter Number of Rows and Columns:");
    scanf("%d %d", &rows,&cols);

    // starRectangle(rows,cols);//Q- 1
    // numbersquare(rows);// Q-2
    // starTriangle(rows);// Q-3
    // strTriInverted(rows); // Q-4
    // numTri(rows);//Q-5
    // numTriInverted(rows);// Q-6
    // oddNumTri(rows);// Q-7
    // alphaSquare(rows);// Q-8
    // alpAndNum(rows);// Q-9
    // starPlus(rows);// Q-10
    // hollowRectangle(rows,cols);// Q-11
    starCross(rows,cols);// Q-12


    return 0;
}
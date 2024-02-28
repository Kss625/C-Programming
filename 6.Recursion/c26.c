#include<stdio.h>
// Maze Path
// condition -> down,right and 1 step at a time
int mazePath(int cr,int cc,int er,int ec)//cr-current row,er-ending row
{
    int rightWays = 0;
    int downWays = 0;
    if(cr==er && cc==ec){
        return 1;
    }
    if(cr==er){// only right ways call
        rightWays += mazePath(cr, cc + 1, er, ec);
    }
    if(cc==ec){// only downwards
        downWays += mazePath(cr + 1, cc, er, ec);
    }
    if(cr<er && cc<ec){
        rightWays += mazePath(cr, cc + 1, er, ec);
        downWays += mazePath(cr + 1, cc, er, ec);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}

int mazeShortWays(int n,int m){
    int rightWays = 0;
    int downWays = 0;
    if(n==1 && m==1) return 1;
    if(n==1){// can't go down
        rightWays += mazeShortWays(n, m - 1);
    }
    if(m==1){
        downWays += mazeShortWays(n - 1, m);
    }
    if(n>1 && m>1){
        rightWays += mazeShortWays(n, m - 1);
        downWays += mazeShortWays(n - 1, m);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
// Call Stack
// pre in post
void  preInPost(int n){
    if(n==0)
        return;
    printf("Pre-%d\n", n);
    preInPost(n - 1);
    printf("In %d\n", n);
    preInPost(n - 1);
    printf("Post %d\n", n);
    return;
}
void towerOfHanoi( int noOfDisks,char source, char helper, char destination)
{
    if(noOfDisks==0) return;
    towerOfHanoi(noOfDisks - 1, source, destination,helper);
    printf("%c to %c\n",source,destination);
    towerOfHanoi(noOfDisks-1,helper,source,destination);
    return;
}
int main()

{
    // n for no. of rows and m for no. of columns
    int n,m;
    printf("Enter NO. of rows and Columns: ");
    scanf("%d %d",&n,&m);

    int noOfWays = mazePath(1,1,n,m);
    printf("%d\n",noOfWays);

    int noOfWays2 = mazeShortWays(n, m);
    printf("%d\n", noOfWays2);

    preInPost(n);

    int noOfDisks;
    printf("Enter No. Of Disks:");
    scanf("%d",&noOfDisks);

    towerOfHanoi(noOfDisks,'A','B','C');

    return 0;
}
#include <stdio.h>
void read(int a[5][5],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
       for(j=0;j<col;j++)
        scanf("%d",&a[i][j]);
}
void display(int a[][5],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
           printf("%d  ",a[i][j]);
        printf("\n");
    }
}
void multiply(int a[][5],int b[][5],int c[][5],int r1,int c1,int c2)
{
    int i,j,k;
    for(i=0;i<r1;i++)
       for(j=0;j<c2;j++)
       {
           c[i][j]=0;
           for(k=0;k<c1;k++)
              c[i][j]+=a[i][k]*b[k][j];
       }
}
int main()
{
    int m[5][5],n[5][5],res[5][5],r1,c1,r2,c2;
    printf("ENTER 1st MATRIX SIZE\n");
    scanf("%d%d",&r1,&c1);
    printf("ENTER 2nd MATRIX SIZE\n");
    scanf("%d%d",&r2,&c2);
    if(c1==r2)
    {
        printf("ENTER 1st MATRIX ELEMENTS\n");
        read(m,r1,c1);
        printf("ENTER 2nd MATRIX ELEMENTS\n");
        read(n,r2,c2);
        multiply(m,n,res,r1,c1,c2);
        printf("MATRIX 1\n");
        display(m,r1,c1);
        printf("MATRIX 2\n");
        display(n,r2,c2);
        printf("RESULTANT MATRIX\n");
        display(res,r1,c2);
    }
    else
       printf("MATRIX MULTIPLICATION IS NOT POSSIBLE");
}
#include <stdio.h>
void read(int a[5][5],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
       for(j=0;j<col;j++)
       scanf("%d",&a[i][j]);
}
void display(int a[5][5],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
           printf("%d  ",a[i][j]);
        printf("\n");
    }
}
int check_symmetric(int a[][5],int r,int c)
{
    int i,j,k;
    for(i=0;i<r;i++)
       for(j=0;j<c;j++)
           if(a[i][j]!=a[j][i])
              return 0;
    return 1;
}
int main()
{
    int m[5][5],n[5][5],r,c,s;
    printf("ENTER MATRIX SIZE\n");
    scanf("%d%d",&r,&c);
    if(r==c)
    {
        printf("\nENTER MATRIX ELEMENTS\n");
        read(m,r,c);
        s=check_symmetric(m,r,c);
        printf("\nGIVEN MATRIX\n");
        display(m,r,c);
        if(s==0)
          printf("\nGIVEN MATRIX IS NOT SYMMETRIC");
        else
          printf("\nGIVEN MATRIX IS SYMMETRIC");
    }
    else
        printf("\nMATRIX OF SIZE %d,%d CAN'T BE SYMMETRIC",r,c);

    return 0;
}
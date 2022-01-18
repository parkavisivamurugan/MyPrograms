#include <stdio.h>
#define line printf("\n***************************\n")
int GCD(int n1,int n2)
{
    int r;
    r=n1%n2;
    if(r==0)
      return n2;
    else
      return GCD(n2,r);
}
int main()
{
    int n1,n2,b;
    printf("ENTER THE NUMBERS:\n");
    scanf("%d %d",&n1,&n2);
    b=GCD(n1,n2);
    line;
    printf("THE GCD OF %d AND %d is %d",n1,n2,b);
    line;
    return 0;
}

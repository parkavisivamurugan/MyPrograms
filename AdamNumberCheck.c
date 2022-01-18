#include <stdio.h>
#define line printf("*******************************")
int squr_rev(int n)
{
    int sq,sum,r;
    sum=0;
    for(sq=n*n;sq!=0;sq=sq/10)
    {
        r=sq%10;
        sum=(sum*10)+r;
    }
    return sum;
}
int rev_squr(int n)
{
    int a,r,sum=0,sq;
    for(a=n;a!=0;a=a/10)
    {
        r=a%10;
        sum=(sum*10)+r;
    }
    sq=sum*sum;
    return sq;
}
int main()
{
    int n,s1,s2;
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);
    s1=squr_rev(n);
    s2=rev_squr(n);
    line;
    if(s1==s2)
        printf("\nTHE NUMBER %d IS A ADAM NUMBER\n",n);
    else
        printf("\nTHE NUMBER %d IS NOT A ADAM NUMBER\n",n);
    line;
    return 0;
}

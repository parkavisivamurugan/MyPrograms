#include <stdio.h>

int main()
{
    int n,d,r;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(d=2;d<=n/2;d++)
    {
    r=n%d;
    if(r==0)
    break;
    }
    if(r==0&&n!=1)
       printf("The no.%d is a composite number",n);
    else if(n==1)
       printf("The no.1 is neither prime nor composite");
    else
       printf("The no%d is a prime number",n);
    return 0;
}
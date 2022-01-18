#include <stdio.h>
#include<string.h>
//SORTING NAMES
void read(char names[][20],int n)
{
    int i;
    for(i=0;i<n;i++)
       scanf("%s",names[i]);
}
void display(char names[][20],int n)
{
    for(int i=0;i<n;i++)
       printf("%s\n",names[i]);
}
void sort(char names[][20],int n)
{
    int i,j;
    char name[20];
    for(i=0;i<n-1;i++)
    {
       for(j=i+1;j<n;j++)
           if(strcmp(names[i],names[j])>0)
           {
               strcpy(name,names[i]);
               strcpy(names[i],names[j]);
               strcpy(names[j],name);
           }
    }
}
int main()
{
    char names[10][20];
    int n;
    printf("ENTER NO.OF NAMES:\n");
    scanf("%d",&n);
    printf("\nENTER NAMES:\n");
    read(names,n);
    sort(names,n);
    printf("\nGIVEN NAMES:\n");
    display(names,n);
    printf("\nSORTED NAMES:\n");
    display(names,n);
    return 0;
}
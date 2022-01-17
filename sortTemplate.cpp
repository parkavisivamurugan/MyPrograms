#include<iostream>
#include<string>
#define line cout<<"**********************\n";
using namespace std;
template<typename A>
//void sort(A,int);
//void display(A,int);
void sort(A a[],int length)
{
    int i,j;
    A t;
    for(i=0;i<length-1;i++)
        for(j=i+1;j<length;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
}
template<typename A>
void display(A a[],int length)
{
    int i;
    for(i=0;i<length;i++)
        cout<<a[i]<<endl;
}
int main()
{
    int number[10];
    string name[10];
    int i,n1,n2;
    cout<<"Enter No of integers:";
    cin>>n1;
    cout<<"Enter integers:"<<endl;
    for(i=0;i<n1;i++)
    {
        cin>>number[i];
    } 
    line;
    cout<<"SORTED NUMBER LIST"<<endl;
    line;
    sort(number,n1);
    display(number,n1);   
    cout<<"Enter No of Names:";
    cin>>n2;
    cout<<"Enter Names:"<<endl;
    for(i=0;i<n2;i++)
    {
        cin>>name[i];
    }
    line;
    cout<<"SORTED NAME LIST"<<endl;
    line;
    sort(name,n2);
    display(name,n2); 
}
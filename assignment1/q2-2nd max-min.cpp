#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int n,i,j,x;
    cout<<"enter the no of elements : ";
    cin>>n;
    cout<<"enter the elements : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    cout<<"second largest number : "<<a[1];
    cout<<"\nsecond smallest number : "<<a[n-2];
    return 0;
}

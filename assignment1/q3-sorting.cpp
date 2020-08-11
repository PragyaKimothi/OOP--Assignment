#include<iostream>
using namespace std;
int main()
{
int n,i,j,temp,a[20];
cout<<"enter the number of elements : ";
cin>>n;
cout<<"enter the elements\n";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=1;i<n-1;i++)
{
    temp=a[i];
    j=i-1;
    while((temp<a[j])&&(j>=0))
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=temp;
}
cout<<"sorted array is:\n";
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}

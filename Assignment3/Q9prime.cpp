#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int s=1000;
    int arr[s];
    int count=0;

    for(int k=0;k<s;k++)
        arr[k]=1;
        for(int i=1;i<s;i++)
        {
            if(arr[i]==1 && i!=1)
            {
                for(int j=i;j<s;j++)
                {
                    if(j%i==0 && j!=i)
                        arr[j]=0;
                }
            }
        }
        for(int a=2;a<s;a++)
        {
            if(arr[a]==1)
            {
                cout<<setw(3)<<a<<" is a prime number\n";
                count++;
            }
        }
        cout<<"A total of "<<count<<" prime numbers are found.\n";

}

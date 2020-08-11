#include<iostream>
using namespace std;
int main(){
int num,i,flag=0;
cout<<"enter the number : ";
cin>>num;
for(i=2;i<=num/2;i++)
{
    if(num%i==0)
        flag=1;
    break;
}
if(flag==0)
    cout<<num<<" is a prime no";
else
    cout<<num<<" is not a prime no";
return 0;
}

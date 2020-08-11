#include<iostream>
using namespace std;
int main()
{
    int num,r,sum=0,temp;
    cout<<"enter the number : ";
    cin>>num;
    temp=num;
    while(num>0)
    {
        r=num%10;
        sum=(sum*10)+r;
        num=num/10;
    }
    if(temp==sum)
        cout<<temp<<" is a palindrome";
    else
        cout<<temp<<" is not a palindrome";
    return 0;
}

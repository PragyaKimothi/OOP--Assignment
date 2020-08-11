#include<iostream>
using namespace std;
int main()
{
    int ahead,alength,atail;
    char outputchar='*';
    cout<<"enter the arrow head : ";
    cin>>ahead;
    cout<<"\nenter arrow length : ";
    cin>>alength;
    cout<<"\nenter arrow tail : ";
    cin>>atail;
    cout<<"\n\n";
    for(int i=0;i<ahead;i+=2)
    {
        for(int space=ahead;space>1;space-=2)
        {
            cout<<" ";
        }
        for(int star=0;star<1;star++)
        {
            cout<<outputchar;
        }
        cout<<endl;
    }
    int atail_length=alength-(ahead/2)-1;
    for(int r=0;r<atail_length;r++)
    {
        for(int c=0;c<atail;c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

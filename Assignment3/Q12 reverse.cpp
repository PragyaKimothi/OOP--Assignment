#include<iostream>
using namespace std;

 void stringReverse(const char str[])
 {
 if (str[0]=='\0')
 return;

 stringReverse(&str[1]);
 cout<<str[0];
}

int main()
 {

 char str[30]="string in backwards";
 for(int i=0;i< 30;i++)
 cout<<str[i];
 cout<<'\n';
 stringReverse(str);
 cout<<endl;
 return 0;
 }

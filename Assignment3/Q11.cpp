#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
 void printArray(const int[],int ,int );
  int main()
 {
 const int s=10,MAXNUMBER = 500;
 int array[s];

srand(time(0));

 for(int i= 0;i<s;i++)
 array[i]=1+rand()%MAXNUMBER;

 cout<<"Array values printed in main are :\n";
 for(int j=0;j<s;j++)
 cout<<setw(5)<<array[j];

 cout<<"\n\nArray values printed in printArray are :\n";
 printArray(array,0,s-1);
 cout<<endl;

 return 0;
 }
 void printArray(const int array[],int start,int end)
 {
 cout<<setw(5)<<array[end];
 if(start==end)
 return;
 else
 printArray(array,start+1,end) ;
 }

#include <iostream>
#include <iomanip>
 #include <cstdlib>
#include <ctime>
using namespace std;

 const int RANGE=1000;
 int recursiveMinimum( const int[],int ,int );
 int main()
 {
 const int s=10;
 int array[s],smallest;
srand(time(0));

 for(int i=0;i<s;i++)
 array[i]=1+rand()%RANGE;
 cout<<"The array members are:\n";
 for(int k=0;k<s;k++)
 cout<<setw(5)<<array[k];
 cout<<'\n';
 smallest=recursiveMinimum(array,0,s- 1);
 cout<<"\nThe smallest element is: "<<smallest<<endl;
 return 0;
 }
 int recursiveMinimum(const int array[],int start,int end)
{
 static int smallest = RANGE;
 if(array[start]<smallest)
 smallest=array[start];

 return start==end?smallest:recursiveMinimum(array,start+1,end);
}


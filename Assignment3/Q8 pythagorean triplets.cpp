#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int count=0;
long int hypt_sqr,side_sqr;
for(long side1=1;side1<=500;side1++)
{
    for(long side2=1;side2<=500;side2++)
        {
            for(long hypt=1;hypt<=500;hypt++)
                {
                    hypt_sqr=pow(hypt,2);
                    side_sqr=pow(side1,2)+pow(side2,2);
                    if(hypt_sqr==side_sqr)
                        {
                            cout<<"The triplets are: "<<endl;
                            cout << side1<<'\t'<<side2<<'\t'<< hypt<<'\n';
                            count++;
                        }
                 }
         }
}
cout<<"The total number of pythagorean triplets are : ";
cout<<count<<endl;
return 0;
}

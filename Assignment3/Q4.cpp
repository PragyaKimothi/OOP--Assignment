#include<iostream>
#include<cmath>
using namespace std;
const float pi = 3.14159;
inline float sphereVolume()
{
	float r,vol;
	cout<<"Enter the radius of the Sphere : ";
	cin>>r;
	vol = (4/3)*pi*pow(r,3);
	return(vol);
}
int main()
{
	cout<<sphereVolume();
	return 0;
}

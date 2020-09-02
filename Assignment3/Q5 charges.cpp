#include<iostream>
#include<iomanip>
using namespace std;

float calculateCharges(float hours)
{
    if(hours<3)
        return 2.00;
    else
        {
            if(hours<24)
            return 2.00+(hours-3)*0.5;
            else
                return 10.00;
        }
}

int main()
{
    float one,two,three;
    cout<<"enter the number of hours for the three customers : "<<endl;
    cout<<"number of hours for first customer : ";cin>>one;
    cout<<"number of hours for second customer : ";cin>>two;
    cout<<"number of hours for third customer : ";cin>>three;
    cout<<"Cars\tHours\tCharge\n";
    cout<<"1\t"<<fixed<<setprecision(1)<<one<<setprecision(2)<<"\t"<<calculateCharges(one)<<endl;
    cout<<"2\t"<<fixed<<setprecision(1)<<two<<setprecision(2)<<"\t"<<calculateCharges(two)<<endl;
    cout<<"3\t"<<fixed<<setprecision(1)<<three<<setprecision(2)<<"\t"<<calculateCharges(three)<<endl;

    return 0;

}

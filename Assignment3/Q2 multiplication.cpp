#include<iostream>
using namespace std;

class Complex
{
    public:
   Complex(int r=0 ,int i=0){
       real=r;
       img=i;

   }
   Complex operator+(Complex const &obj)
   {
       Complex result;
       result.real=real+obj.real;
      result.img=img+obj.img;
      return result;

   }
friend ostream& operator<<(ostream& output, const Complex&c)
{
    output<<c.real;
    output<<"+i" << c.img << endl;
    return output;
}

friend istream& operator>>(istream& input, Complex&c)
{
    cout<<"Enter the real part: ";
    input>>c.real;
    cout<<"Enter the imaginary part: ";
    input>>c.img;
    return input;
}
Complex operator*(Complex const&c)
{
	Complex result;
	result.real=(real*c.real)-(img*c.img);
	result.img=(real*c.img )+(img*c.real);
	return result;
}

   private:
   int real ,img ;
};

int main()
{
    Complex c1,c2;
   cin>>c1;
   cin>>c2;
   cout<<"The result is: ";
   cout<<c1*c2;


}

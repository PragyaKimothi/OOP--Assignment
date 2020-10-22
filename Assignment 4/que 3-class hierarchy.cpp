/*QUESTION 3:
Inheritance of hierarchy of Quadrilateral
                           -Trapezoid
                           -Parallelogram
                           -Rectangle
                           -Square
*/

#include<iostream>
using namespace std;
class Quadrilateral
{
public:
Quadrilateral()
{
    cout<<" ";
}

};
class Trapezoid : public Quadrilateral
{
 private:
     int b1,b2,ht;
 public:
 void getB1()
    {
        cout<<"enter the base1: "<<endl;
        cin>>b1;
    }
    void showB1()
    {
        cout<<"\n base1:  "<<b1<<endl;
    }

  void getB2()
    {
        cout<<"enterthe base2: "<<endl;
        cin>>b2;
    }
    void showB2()
    {
        cout<<"\n base2:  "<<b2<<endl;
    }void getHt()
    {
        cout<<"enter the height: "<<endl;
        cin>>ht;
    }
    void showHt()
    {
        cout<<"\n height:  "<<ht<<endl;
    }
    float area_of_trap()
    {
        float ar_trap;
        ar_trap=(b1+b2/2)*ht;
        return ar_trap;
    }
};

class Parallelogram : public Quadrilateral
{

private:
    int height ,base;
public:
    void getHeight()
    {
        cout<<"enter the Height: "<<endl;
        cin>>height;
    }
    void showHeight()
    {
        cout<<"\n Height:  "<<height<<endl;
    }
    void getBase()
    {
        cout<<"enter the Base:  "<<endl;
        cin>>base;
    }
    void showBase()
    {
        cout<<"\n Base:  "<<base<<endl;
    }
    float area_of_parallelogram()
    {
        float area_p;
        area_p=height*base;
        return area_p;
    }
    float perimeter_of_parallelogram()
    {
        float peri_p;
        peri_p=height+base+height+base;
        return peri_p;
    }

};
class Rectangle : public Quadrilateral
{
private:
int breadth, length;
public:
    void getLength()
{
    cout<<"enter the length: "<<endl;
    cin>>length;
}
void showLength()
{
    cout<<"\n length: "<<length<<endl;
}
void getBreadth()
{
    cout<<"enter the breadth: "<<endl;
    cin>>breadth;
}
void showBreadth()
{
    cout<<"\n breadth: "<<breadth<<endl;
}

float area_rect()
{
    float ar_rect;
    ar_rect=length*breadth;
    return ar_rect;
}
float peri_rect()
{
    float p_rect;
    p_rect= 2*(length+breadth);
    return p_rect;
}

};
class Square : public Quadrilateral
{
private:
    int side;
public:
void getSide()
{
    cout<<"enter the side: "<<endl;
    cin>>side;
}
void showSide()
{
    cout<<"\n side: "<<side<<endl;
}
float area()
{
    float sq;
    sq =side*side;
    return sq;
}
float perimeter()
{
    float sqt;
    sqt=4*side;
    return sqt;
}
};


int main()
{
    Trapezoid t1;
    Parallelogram p1;
    Rectangle r1;
    Square s1;
    cout<<"Enter the details of trapezoid: \n"<<endl;
    t1.getB1();
    t1.getB2();
    t1.getHt();
    cout<<"\nArea of trapezoid: "<<t1.area_of_trap();
    cout<<"\n"<<endl;

    cout<<"   Enter the details of parallelogram\n"<<endl;
    p1.getHeight();
    p1.getBase();
   cout<<"\nArea of parallelogram: "<< p1.area_of_parallelogram();
   cout<<"\nPerimeter of parallelogram: "<< p1.perimeter_of_parallelogram();
    cout<<"\n";

    cout<<"\n   Enter details of rectangle"<<endl;
    r1.getLength();
    r1.getBreadth();
    cout<<"\nArea of rectangle: "<<r1.area_rect();
    cout<<"\nPerimeter of rectangle: "<<r1.peri_rect();
    cout<<"\n\n";

    cout<<"   Enter side of square"<<endl;
    s1.getSide();
   cout<<"\nArea of square: "<< s1.area();
    cout<<"\nPerimeter of square: "<<s1.perimeter();
    cout<<"\n";
    return 0;

}

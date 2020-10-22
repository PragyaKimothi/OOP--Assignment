/* QUESTION 4:
                                              Shape
                   TwoDimensionalShape                    ThreeDimensionalShape

       Quadrilaterial    Ellipse   Triangle                 -Sphere
       -Trapezoid        -Circle                            -Cone
       -Parallelogram                                       -Cube
       -Rhombus                                             -Cylinder
       -Rectangle                                           -Prism
       -Square
*/


#include<iostream>
using namespace std;
class Shape
{
public:
    int length,breadth,side,base,height,radius;
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
   void getSide()
{
    cout<<"enter the side: "<<endl;
    cin>>side;
}
void showSide()
{
    cout<<"\n side: "<<side<<endl;
}
void getRadius()
{
    cout<<"enter the radius: "<<endl;
    cin>>radius;
}
void showRadius()
{
    cout<<"\n Radius: "<<radius<<endl;
}
};

class TwoDimensionalShape: public Shape
{
public:

float area_of_rectangle()
{
 return  length*breadth;
}

 float area_of_parallelogram()
    {

        return height*base;
    }

float area_of_triangle()
{
    return 0.5 *height*base;
}

float area_of_square()
{
    return side*side;
}


float area_of_circle()
{
    return 3.14*radius*radius;
}

};
class ThreeDimensionalShape: public Shape
{
public:
/* void getRadius()
{
    cout<<"enter radius: "<<endl;
    cin>>radius;
}
void showRadius()
{
    cout<<"\n Radius: "<<radius<<endl;
}
void getHeight()
    {
        cout<<"enter Height: "<<endl;
        cin>>height;
    }
    void showHeight()
    {
        cout<<"\n Height:  "<<height<<endl;
    }*/
    float volume_of_cylinder()
    {
        return 3.14*radius*radius*height;
    }
    float volume_of_cone()
    {
        return (1/3)*3.14*radius*radius*height;
    }
    float volume_of_sphere()
    {
        return (4/3)*3.14*radius*radius*radius;
    }
float volume_of_cube()
{
    return side*side*side;
}

};
int main()
{   Shape s1;
    TwoDimensionalShape s2;
    ThreeDimensionalShape s3;
    cout<<"    Enter rectangle details\n"<<endl;
    s2.getLength();
    s2.getBreadth();
    cout<<"\nArea of rectangle: "<<s2.area_of_rectangle();
    cout<<"\n    Enter details for triangle and parallelogram\n"<<endl;
    s2.getHeight();
    s2.getBase();
    cout<<"\nArea of parallelogram: "<<s2.area_of_parallelogram();
    cout<<"\nArea of triangle: "<<s2.area_of_triangle();
    cout<<"\n    Enter details for square\n"<<endl;
    s2.getSide();
    cout<<"\nArea of square: "<<s2.area_of_square();
    cout<<"\n    Enter radius of circle\n"<<endl;
    s2.getRadius();
    cout<<"\nArea of circle: "<<s2.area_of_circle();
    cout<<"\n\n     Volumes of 3D Shapes\n"<<endl;
    cout<<"\n    Enter radius and height of cylinder: \n";
    s3.getRadius();
    s3.getHeight();
    cout<<"\nVolume of cylinder: "<<s3.volume_of_cylinder();
    cout<<"\n    Enter radius and height of cone: \n";
     s3.getRadius();
    s3.getHeight();
    cout<<"\nVolume of cone: "<<s3.volume_of_cone();
     cout<<"\n    Enter radius of sphere: \n";
     s3.getRadius();
    cout<<"\nVolume of sphere: "<<s3.volume_of_sphere();

    cout<<"\n    Enter side for cube\n";
    s3.getSide();
    cout<<"\nVolume of cube: "<<s3.volume_of_cube();
    return 0;
}

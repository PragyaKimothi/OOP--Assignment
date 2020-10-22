 /*QUESTION 2:

                                                STUDENTS      (base class)

                           UndergraduateStudent            GraduateStudent
                           -Freshman                        -DoctoralStudent
                           -Senior                          -MastersStudent
                           -Junior

   The hierarchy contains many "is-a" (inheritance) relationships.
   An UndergraduateStudent is a Student.
   A GraduateStudent is a Student too.
   Each of the classes Freshman, Senior, Junior is an UndergraduateStudent and is a Student.
   Each of class DoctoralStudent and MastersStudent is a Graduate and is a Student.
 */


#include<iostream>
using namespace std;
class Students
{
public:
    Students()
    {
        cout<<"   Hierarchy of Students   "<<endl;
    }
};
class UndergraduateStudents : public Students
{
public:
    UndergraduateStudents()
    {
        cout<<"-Undergraduate Students\n-Graduate students\n"<<endl;
    }
    char Freshman()
    {
        cout<<"-Freshman of university"<<endl;
    }
    char Senior()
    {
        cout<<"-Senior"<<endl;
    }
    char Junior()
    {
        cout<<"-Junior"<<endl;
    }
};
class GraduateStudent : public Students
{
public:
    GraduateStudents()
    {
        cout<<"Graduate Students"<<endl;
    }
    char DoctoralStudent()
    {
        cout<<"-Doctoral Students"<<endl;
    }
    char MastersStudent()
    {
        cout<<"-Masters Students"<<endl;
    }
};

int main()
{
    UndergraduateStudents st1;
    GraduateStudent st2;
    cout<<"\n  The first category of students in university  "<<endl;
    char f=st1.Freshman();
    char n=st1.Senior();
    char j=st1.Junior();
    cout<<"\n  The second category of students in university  "<<endl;
    char d=st2.DoctoralStudent();
    char m=st2.MastersStudent();
    return 0;
}

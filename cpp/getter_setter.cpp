#include<iostream>
using namespace std;

class Student
{
    int roll;
    char name[20];
    float marks;
    char grade;

    public:

    int getRoll()
    {
        return roll;
    }
    
    int getMarks()
    {
        return marks;

    }

    void setGrade()
    {
        if(marks>90) grade='A';
        else if(marks>80) grade='B';
        else if(marks>70) grade='C';
        else if(marks>60) grade='D';
        else grade='E';
    }
};
int main()
{
    Student rahul;
    rahul.
}
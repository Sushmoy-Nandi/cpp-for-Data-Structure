#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;


        Student(int r,int s,int c,char* n)
        {
            roll=r;
            section=s;
            cls=c;
            strcpy (name,n);
        }
};
int main()
{
    Student rahim(29,'A',7,"Rahim Ullah");
    Student karim(55,'D',7,"Karim Ullah");

    cout<<karim.roll<<endl;
    cout<<karim.section<<endl;
    cout<<karim.cls<<endl;
    cout<<karim.name<<endl;

    return 0;

}
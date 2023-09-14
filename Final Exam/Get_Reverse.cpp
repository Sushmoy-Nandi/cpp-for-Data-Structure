#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
       string name;
       int cls;
       char section;
       int math_marks;
       int eng_marks;
};

int main() 
{
    int N;
    cin>>N;
    Student a[N];
    for (int i=0;i<N;i++) 
    {
       getline(cin,a[i].name);
       cin>>a[i].name>>a[i].cls>>a[i].
       section>>a[i].math_marks>>a[i].eng_marks;
    }
    for (int i=N-1;i>=0;i--) 
    {
        cout<<a[i].name<<" "<<a[i]
        .cls<<" "<<a[i].
        section<<" "<<a[i].
        math_marks<<" "<<a[i].
        eng_marks<<endl;
    }

    return 0;
}
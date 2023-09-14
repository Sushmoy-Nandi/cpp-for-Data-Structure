#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
        string name;
        int cls;
        char section;
        int id;
};
int main() 
{
    int N;
    cin>>N;
    Student a[N];
    for(int i=0;i<N;i++) 
    {
        getline(cin,a[i].name);
        cin>>a[i].name>>a[i].cls>>a[i].
        section>>a[i].id;
    }
    int i=0,j=N-1;
    while(i<j)
    {
        int temp=a[i].id;
        a[i].id=a[j].id;
        a[j].id=temp;
        i++;
        j--;
    }
    for(int i=0;i<N;i++) 
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].
        section<<" "<<a[i].id<<endl;
    }
    return 0;
}

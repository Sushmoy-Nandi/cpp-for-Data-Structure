// #include<bits/stdc++.h>
// using namespace std;
// class person
// {
//     public:
//         string name;
//         float height;
//         int age;


//         person(string nm,float h,int a)
//         {
//            name=nm;
//            height=h;
//            age=a;
//         }
// };
// int main()
// {
//     person sushmoy("Sushmoy Nandi",175.5,20);
//     person bappi("Bappi Nandi",170.5,21);

//    if(sushmoy.age>bappi.age)
//     {
//         cout<<sushmoy.name<<" has a greater age."<<endl;
//     }
//     else 
//     {
//         cout<<bappi.name<<" has a greater age."<<endl;
//     }
    
//     return 0;

// }
#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        float height;
        int age;




        person(string nm,float h,int a)
        {
           name=nm;
           height=h;
           age=a;
        }
};
int main()
{
    person sushmoy("Sushmoy Nandi",175.5,20);
    cout<<sushmoy.name<<endl;
    cout<<sushmoy.height<<endl;
    cout<<sushmoy.age<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;


};
int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
        /* code */
    }
    
    Student mx;
    mx.marks=INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if (a[i].marks>mx.marks)
        {
            mx=a[i];
            /* code */
        }
        
        /* code */
    }
    cout<<mx.marks<<endl;
     
     Student mn;
    mn.marks=INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        if (a[i].marks<mx.marks)
        {
            mx=a[i];
            /* code */
        }
        
        /* code */
    }
    cout<<mx.marks<<endl;
    
    return 0;
}
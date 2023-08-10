#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()
{
    Student kobir;
    kobir.roll=2429;
    kobir.cls=12;
    kobir.section='A';
    char nm[100]="MR Kobir";
    strcpy(kobir.name,nm);

    Student jhon;
    jhon.roll=25;
    jhon.cls=7;
    jhon.section='C';
    char nm2[100]="MR Jhon";
    strcpy(jhon.name,nm2);
    cout<<"Here The print 1st person Data "<<endl;
    cout<<kobir.name<<endl;
    cout<<kobir.roll<<endl;
    cout<<kobir.cls<<endl;
    cout<<kobir.section<<endl;
    cout<<"Here The print 2nd person Data "<<endl;
    cout<<jhon.name<<endl;
    cout<<jhon.roll<<endl;
    cout<<jhon.cls<<endl;
    cout<<jhon.section<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void fun2()
{
    int n=30;
    cout<<"I am from fun2\n";
}
void fun1()
{
    int n=20;
    cout<<"I am from fun1\n";
    fun2();
}
int main()
{
    int n=15;
    cout<<"I am from main\n";
    fun1();
    return 0;
}
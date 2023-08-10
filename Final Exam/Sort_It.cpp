#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
        int sm;
};
bool cmp(Student a,Student b)
{
    
    if(a.sm != b.sm)
    {
        return a.sm>b.sm;
    }
    
        else{
            return a.id < b.id;
        } 

    
}        
int main()
{
    int n;
    cin>>n;
    Student a[n];
    cin.ignore();
    for (int i = 0; i < n ; i++)
    {
      cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;cin.ignore();
      a[i].sm=a[i].math_marks+a[i].eng_marks;
        /* code */
    }
    
  sort(a,a+n,cmp);

  for (int i = 0; i < n; i++)
  {
       cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl; 
     
    /* code */
  }
  
       /* code */
   
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string nm;
        int cls;
        char s;
        int id;
};
        
int main()
{
    int n;
    cin>>n;
    Student a[n];
    cin.ignore();
    for (int i = 0; i < n ; i++)
    {
      cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id;cin.ignore();
        /* code */
    }
  for (int i = 0; i < n-1
  ; i++)
  {
    for (int j = i+1;j < n; j++)
    {
       
            int temp = a[i].id;
        a[i].id = a[j].id;
        a[j].id = temp;
            /* code */
       
        
        /* code */
    }
    
    /* code */
  }
  for (int i = 0; i < n; i++)
  {
       cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl; 
     
    /* code */
  }
  
       /* code */
   
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cin.ignore();
   for (int i = 0; i < a; i++)
   {
        string S,X;
        getline(cin,S);
        cin>>X;
        cin.ignore();
        int res=S.find(X);
    while(S.find(X) != -1)
    {
        S.replace(res,4,"fgvf");
    }   
       cout<<S<<endl;   
   
  
    /* code */
   }
   
  


  
   

    return 0;

         

    
}
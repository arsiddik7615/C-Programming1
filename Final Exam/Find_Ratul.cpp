#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline (cin,s);
    stringstream ss(s);
    string word;
    int flag=false;
    while (ss>>word)
    {
             
    if (word=="Ratul")
        {
            flag=true;
          
            break;
            

            /* code */
        }
    }
    
    if (flag)
    {
        cout<<"YES"<<endl;
        /* code */
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
      
        /* code */
    
    
    return 0;
}
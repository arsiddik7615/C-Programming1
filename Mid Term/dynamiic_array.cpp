#include<bits/stdc++.h>
using namespace std;
int main()
{
   int *a =new int[4];
   for (int i = 0; i < 4; i++)
   {
    cin>>a[i];
    /* code */
   }
   int b[7];
   for (int i = 0; i < 4; i++)
   {
    b[i]=a[i];
    /* code */
   }
   b[4]=50;
   b[5]=60;
   b[6]=70;
   for (int i = 0; i < 7; i++)
   {
    cout<<b[i]<<" ";
    /* code */
   }
   cout<<endl;
   delete[] a;
   for (int i = 0; i < 4; i++)
   {
    cout<<a[i]<<" ";
    /* code */
   }
   
    return 0;
}
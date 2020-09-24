#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   for(int i=1;i<n;i++)
   {
       if(i%2==0)
       cout<<"I love that"<<" ";
       else
       {
           cout<<"I hate that"<<" ";    
       }
       
   }
   if (n%2==0)
   {
       cout<<"I love it";
   }
   else
   {
       cout<<"I hate it";
   }
   
   


}
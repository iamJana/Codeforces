#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int odd=0;
    int even=0;
    int result;
    for (int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            odd=odd+i;
        }
        else
        {
             even=even+i;
        }
        
    }
    result=odd-even;
    cout<<result;
    
}
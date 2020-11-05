#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100];
    
    cin>>a;
    int count ;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]==" ")
        count++;
    }
    cout<<count;
    
    
    
}
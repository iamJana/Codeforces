#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int size;
       cin>>size;
       int res[size];
       int n;
       n=4*size;
       int arr[n];
       
       for (int i = 0; i < n; i++)
       {
           arr[i]=i+1;
       }
       int temp=n;

        for (int i = 0; i < size; i++)
       {
           temp--;
           temp--;
           res[i]=temp;
       }
        for (int i = 0; i < size; i++)
       {
           cout<<res[i]<<" ";
       }
       cout<<endl;
       
    }
    
    
}
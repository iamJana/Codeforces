#include <bits/stdc++.h>
using namespace std;
#define For(it,val,n) for (int it=val;it<n;it++)

int ans(int z)
{
  n=z;
For(i,0,4)
{
  temp=n%10;
  n=n/10;
  v.push_back(temp);

}
reverse(v,v+4);
if(v[0]!=v[1]&&v[0]!=v[2]&&v[0]!=v[3]&&v[1]!=v[0]&&v[1]!=v[2]&&v[2]!=v[3]&&v[3]!=v[0]&&v[3]!=v[1]&&v[3]!=v[2])
{
  cout<<v;
}
else
{
  n++;
  ans(n);
}

}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
cin>>n;
int temp;
int x=n;


ans(x);
  
}
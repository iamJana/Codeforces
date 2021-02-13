#include <bits/stdc++.h>
using namespace std;
#define For(it,val,n) for (int it=val;it<n;it++)
void solve()
{
int n,co,c1,h;
cin>>n>>co>>c1>>h;
int s;cin>>s;
vector<int> v;
while(s>0)

{
int mod=s%10;
v.push_back(mod);
s=s/10;
}
sort(v.rbegin(),v.rend());
int sum=accumulate(v.begin(),v.end(),0);
int temp=n-sum;
int zero=n*co+sum*h;
int one=n*c1+temp*h;
cout<<zero<<" "<<one;
int an=min(zero,one);cout<<an;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin>>T;
  while(T--)
  solve();
}
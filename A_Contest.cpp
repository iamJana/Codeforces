#include <bits/stdc++.h>
using namespace std;
#define For(it,val,n) for (int it=val;it<n;it++)
void solve()
{
int a,b,c,d;
cin>>a>>b>>c>>d;
if (a==b&&c==d)
cout<<"Tie";
else if (a<b&&c<d)
cout<<"Vasya";
else cout<<"Misha";
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
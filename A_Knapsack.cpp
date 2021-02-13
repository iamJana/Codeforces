#include <bits/stdc++.h>
using namespace std;
#define For(it,val,n) for (int it=val;it<n;it++)
void solve()
{
long long n,W;
cin>>n>>W;
int w[n];
For(i,0,n) cin>>w[i];
vector <int> c;
int count=-1;
int inc;
For(i,1,n+1)
{
    if ((w[i]/2)<=W)
    {
        c.push_back(i);
        count =1;
        inc++;
    }
    else continue;
}
if(count==1)
{
    cout<<inc<<endl;
 for (auto i = c.begin(); i != c.end(); ++i) 
        cout << *i << " "; 
}
else cout<<"-1"<<endl;

}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while (t--)
  {
     solve();
  }
  
  
}
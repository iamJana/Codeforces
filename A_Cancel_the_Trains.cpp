#include <bits/stdc++.h>
using namespace std;
#define For(it,val,n) for (int it=val;it<n;it++)
void solve()
{
int n,m;
cin>>n>>m;
int one[n];
int two[m];
For(i,0,n) cin>>one[i];
For(i,0,m) cin>>two[i];
int co1=0;
if(n>m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(two[i]==one[j])
            {
                co1++;
            }
            else continue;
        }
    }
}
else
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(one[i]==two[j])
            {
                co1++;
            }
            else continue;
        }
    }
}

cout<<co1<<endl;

}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  solve();
}
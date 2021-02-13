#include <bits/stdc++.h>
using namespace std;
#define For(it,val,n) for (int it=val;it<n;it++)
void solve()
{
int n ;
        cin>>n;
        int sum = 0;
        int cnt = 0;
        for(int i = 1 ;; i++){
            sum += i;
            ++cnt;
            if( sum >= n ) break;
        }
        cout<<(sum - n == 1 ? cnt + 1 : cnt )<<endl;
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
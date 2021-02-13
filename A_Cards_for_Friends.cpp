#include <bits/stdc++.h>
using namespace std;
#define For(it, val, n) for (int it = val; it < n; it++)
void solve()
{
    int w, h, n;
    cin >> w >> h >> n;
   
   int ans=w*h;
    if (ans%n==0||ans/n==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}
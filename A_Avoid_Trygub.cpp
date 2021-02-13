#include <bits/stdc++.h>
using namespace std;
#define For(it, val, n) for (int it = val; it < n; it++)
void solve()
{
    int temp;
    cin >> temp;
    string s;
    cin >> s;
    string sub="trygub";
    string su="try";
    string sa="gub";
    auto isFound=s.find(sub);
    auto t=s.find(su);
    auto a=s.find(sa);
    if((isFound!=string::npos) || (t!=string::npos) || (a!=string::npos))
    {
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    else
        cout << s << endl;
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
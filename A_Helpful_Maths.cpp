#include <bits/stdc++.h>
using namespace std;
#define For(it, val, n) for (int it = val; it < n; it++)
void solve()
{
    vector<char> s;
    string str;
    cin >> str;
    For(i, 0, str.length())
    {
        char n = str[i];
        if (n != '+')
        {
            s.push_back(n);
        }
    }
    sort(s.begin(), s.end());
    cout << s[0];
    for (int i = 1; i < s.size(); i++)
    {
        cout << "+" << s[i];
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
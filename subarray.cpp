#include <bits/stdc++.h>
using namespace std;
#define For(it, val, n) for (int it = val; it < n; it++)
void solve()
{
    int n;
    cin >> n;
    int array[n];
    For(i, 0, n) cin >> array[i];
    int best = 0, sum = 0;
    for (int k = 0; k < n; k++)
    {
        sum = max(array[k], sum + array[k]);
        best = max(best, sum);
    }
    cout << best << "\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
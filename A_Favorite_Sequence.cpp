#include <bits/stdc++.h>
using namespace std;
#define For(it, val, n) for (int it = val; it < n; it++)
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int tem = n;
    int div = 0;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <= n / 2; i++)
    {

        cout << arr[i] << " ";
        cout << arr[tem] << " ";
        tem--;
        div = i;
    }
    if (n % 2 != 0)
    {
        cout << arr[div + 1] ;
    }
    cout << endl;
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
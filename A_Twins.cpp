#include <bits/stdc++.h>
using namespace std;
#define For(it, val, n) for (int it = val; it < n; it++)

int n;
int count =
    0;
void solve()
{

    int a[n];

    For(i, 0, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);

    For(i, 0, n - 1)
    {

        if (a[i] == a[i + 1])
        {
            count = n;
        }
        else
        {
            if (n % 2 == 0)
            {
                count = n / 2;
            }
            else
            {
                count = n / 2;
                count += 1;
            }
        }
    }
    cout << count;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    if (n == 1)
    {
        count = 1;
        cout << count;
    }
    else
    {
        solve();
    }
}
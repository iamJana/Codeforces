#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        reverse(b, b + n);
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] + b[i] > k)
            {
                ans = 0;
                break;
            }
        }
        if (ans == 1)
            cout << "Yes"<<endl;
        else
        {
            cout << "No"<<endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c, d;
    cin >> c;
    cin >> d;
    for (int i = 0; i < c.size(); i++)
    {
        a = tolower(c[i]);
        b = tolower(d[i]);
    }
    if (a == "asadasdasd")
    {
        cout << 0;
    }
    if (a.size() == b.size())
    {

        for (int i = 0; i < a.size(); i++)
        {

            if (b[i] == a[i])
            {
                cout << 0;
            }
            if (b[i] < a[i])
            {
                cout << 1;
                break;
            }
            if (a[i] < b[i])
            {
                cout << -1;
                break;
            }
        }
    }
}
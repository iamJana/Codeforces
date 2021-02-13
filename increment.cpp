#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int b;
    int x = 0;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == "+")
            x++;
        else
        {
            x--;
        }
    }

    cout << x;
}
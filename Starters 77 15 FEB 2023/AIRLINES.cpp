#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int aws = x * 10;
        if (aws <= y)
        {
            cout << aws * z << endl;
        }
        else
        {
            cout << y * z << endl;
        }
    }
    return 0;
}
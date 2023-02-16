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
    ll n, m;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll d1 = abs(a - b), d2 = abs(a - c), d3 = abs(b - c);

        if (d1 % 2 == 1 || d2 % 2 == 1 || d3 % 2 == 1)
            cout << "-1\n";
        else
        {
            ll ans = 0;
            while (1)
            {
                if (a == b && b == c)
                    break;
                if (a >= b && a >= c)
                {
                    ll d1 = a - b;
                    ll d2 = a - c;
                    ll diff = min(d1, d2);
                    if (diff == 0)
                        diff = max(d1, d2);
                    ans += (diff / 2);
                    a -= (diff / 2);
                    b += (diff / 2);
                    c += (diff / 2);
                }
                else if(b >= a & b >= c)
                {
                    ll d1 = b - a;
                    ll d2 = b - c;
                    ll diff = min(d1,d2);

                    // if (d3 % 2 == 1)

                    if (diff == 0)
                        diff = max(d1, d2);
                    ans += (diff / 2);
                    a += (diff / 2);
                    b -= (diff / 2);
                    c += (diff / 2);
                }
                else if(c >= a && c >= b)
                {
                    ll d1 = c - b;
                    ll d2 = c - a;
                    ll diff = min(d1, d2);
                    if (diff == 0)
                        diff = max(d1, d2);
                    ans += (diff / 2);
                    a += (diff / 2);
                    b += (diff / 2);
                    c -= (diff / 2);
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}

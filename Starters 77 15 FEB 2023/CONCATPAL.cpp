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
        string s1, s2;
        cin >> n >> m >> s1 >> s2;
        map<char, int> freq;
        if (m > n)
        {
            swap(m, n);
            swap(s1, s2);
        }
        for (int i = 0; i < n; i++)
            freq[s1[i]] += 1;
        for (int i = 0; i < m; i++)
            freq[s2[i]] -= 1;
        int flag = 1, cnt = 0, diff = n - m;
        for (auto ele : freq)
        {
            if (ele.second < 0)
            {
                flag = 0;
                break;
            }
            if (ele.second % 2 == 0)
            {
                continue;
            }
            if (cnt)
                flag = 0;
            else
                cnt = 1;
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

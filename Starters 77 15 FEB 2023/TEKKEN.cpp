#include <iostream>
using namespace std;
int main() {
	int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int saks = abs(b - c);
        if (a > saks)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
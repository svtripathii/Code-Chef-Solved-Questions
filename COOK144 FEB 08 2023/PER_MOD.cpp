#include <iostream>
using namespace std;

void solve(int n) {
    for(int i=2; i<=n; i++) {
        cout<<i<<" ";
    }
    cout<<1<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    solve(n);
	}
	return 0;
}

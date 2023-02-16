#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(!(n%2)){
	        for(int i=n;i>=2;i-=2){
	            cout<<i<<" ";
	        }
	        for(int i=1;i<=n-1;i+=2){
	            cout<<i<<" ";
	        }
	    }
	    else{
	        for(int i=n-1;i>=2;i-=2){
	            cout<<i<<" ";
	        }
	        for(int i=1;i<=n;i+=2){
	            cout<<i<<" ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}

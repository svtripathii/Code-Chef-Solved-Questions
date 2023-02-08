#include <iostream>
using namespace std;
#include<unordered_map>

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    unordered_map<char,int> m;
	    
	    for(int i=0; i<s.length(); i++) {
	        m[s[i]]++;
	    }
	    bool count= false;
	    
	    
	    for(auto i: m) {
	        if(i.second >= 2) {
	            count=true;
	            break;
	        }
	    }
	    if(count) {
	        cout<<s.length() - 2<< endl;
	    }
	    else {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}

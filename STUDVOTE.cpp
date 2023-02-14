#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int arr[x];
	    int count=0;
	    map<int,int>mp;
	    for(int i=0;i<x;i++){
	        cin>>arr[i];
	        if(arr[i]==i+1){
	           mp[arr[i]]=-x; 
	        }
	        mp[arr[i]]++;
	    }
	    for(auto &i : mp){
	        if(i.second>=y){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

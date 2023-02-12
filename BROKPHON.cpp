#include <iostream>

using namespace std;



int main() {

	// your code goes here

	int t;

	cin>>t;

	while(t--){

	    int x;

	    cin>>x;

	    int count=0;

	    int arr[x],flage=0;

	    for(int i=0;i<x;i++){

	        cin>>arr[i];

	    }

	    for(int i=1;i<x;i++){

	        if(arr[i-1]!=arr[i]){

	           if(count==0  || flage==0){

	               count+=2;

	               flage=1;

	           }

	           else{

	               count++;

	               flage=1;

	           }

	        }

	        else{

	            flage=0;

	        }

	    }

	    cout<<count<<endl;

	}

	return 0;

}


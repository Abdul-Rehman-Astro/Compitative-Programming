#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int x;
	    set<int>s;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        s.insert(x);
	    }
	    if( s.size()==(n) && n%2!=0){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}

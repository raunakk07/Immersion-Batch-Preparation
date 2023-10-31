#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int n;
	    cin>>n;
	    vector<int> l(n);
	    int even = 0 , odd = 0;
	    vector<int> e;
	    vector<int> o;
	    for(int i = 0;i<n;i++){
	        cin>>l[i];
	        if(l[i]%2){odd++; o.push_back(l[i]);}
	        else{even++; e.push_back(l[i]); }
	        
	        
	    }
	    
	    
	    if(even ==0 || odd == 0 ){cout<<"-1\n"; continue;}
	    for(int i : e){cout<<i<<" ";}
	    for(int i : o) cout<<i<<" ";
	    cout<<endl;
	}
	return 0;
}

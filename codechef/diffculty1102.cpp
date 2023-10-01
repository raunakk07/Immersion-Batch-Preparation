// question link = "https://codechef.com/problems/ABSTRING?tab=statement"

// solution = 

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n; cin>>n;
	    string s;
	    cin>>s;
	    unordered_map<char,int> ml;
	    for(int i =0;i<n;i++){
	        ml[s[i]]++;    //stores frequency of each element
	    }
	    if(n & 1){
	        cout<<"no\n";    //checks if array length is odd or even 
	    }else{
	        bool flag = true;
	        for(auto it:ml){
	            if(it.second & 1){
	                flag = false;
	                break;
	                
	            }else{
	                continue;
	            }
	        }
	        if(flag == true){
	        cout<<"yes\n";
	    }else{
	        cout<<"no\n";
	    }
	    }
	    
	}
	return 0;
}


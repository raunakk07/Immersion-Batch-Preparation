//question link = "https://www.codechef.com/problems/NAME1?tab=statement"

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string a , b;
	    cin>>a>>b;
	    a=a+b;
	    vector<int> v (26,0) ;
	    for(int i =0;i<a.size();i++){
	        if(a[i]==' ') continue;
	        else v[a[i]-97]++;
	    }int n;
	    cin>>n;
	    string s = "";
	    string temp = "";
	    for(int i =0;i<n;i++){
	        cin>>temp;
	        s=s + temp;
	        
	    }
	    vector<int> x(26,0); int j;
	    for(j=0;j<s.size();j++){
	        x[s[j]-97]++;
	        if(x[s[j]-97]>v[s[j]-97]){ cout<<"NO\n"; break;};
	        }
	    if(j == s.size()) cout<<"YES\n";  
	    
	    
	    
	}
	return 0;
}

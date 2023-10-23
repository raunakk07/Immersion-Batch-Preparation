//question link = "https://www.codechef.com/problems/EVMHACK?tab=statement"

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,p,q,r;
	    cin>>a>>b>>c>>p>>q>>r;
	    float half = (p+q+r)/2;
	    if(p+b+c>half || a+q+c>half || a+b+r>half) cout<<"YES\n";
	    else cout<<"no\n";
	    
	}
	return 0;
}

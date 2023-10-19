//question link = "https://www.codechef.com/problems/SANTACHOC?tab=statement"

#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int choc[n];
	    for(int i =0;i<n;i++) cin>>choc[i];
	    int sum =0;
	    for(int i =0;i<n;i++) sum+=choc[i];
	    
	    if(sum<n) cout<<"no\n";
	    
	    else{
	        sum = sum%n;
	        if(k == 0 && sum != 0 ) cout<<"no\n";
	        else cout<<"yes\n";
	    }
	    
	}
	return 0;
}

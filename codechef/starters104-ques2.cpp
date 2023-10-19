//https://www.codechef.com/problems/PIZZAC

#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    if(n == 1) cout<<"YES"<<endl;
	    else if(n%2 == 0) cout<<"Yes"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}

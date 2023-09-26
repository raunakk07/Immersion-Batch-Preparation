#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,k,p;
	    cin>>n>>x>>k>>p;
	    if(k<=x) p+=k*10;
	    else if(k<n && k>x) p=p+x*10+(k-x)*5;
        else p=p+x*10+(n-x)*5+20;
        cout<<p<<endl;
	    
	}
	return 0;
}

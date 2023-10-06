//question link = "https://www.codechef.com/problems/AVG?tab=statement"

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,v,i;
	    cin>>n>>k>>v;
	    int a[n],s=0;
	    for(i=0;i<n;i++){
	      cin>>a[i];
	      s+=a[i];
	    }
	    int d = (v*(n+k)-s);
	    if(d>0 && d%k==0 && k!=0)
	     cout<<d/k<<endl;
	    else
	      cout<<-1<<endl;
	    
	}
	return 0;
}

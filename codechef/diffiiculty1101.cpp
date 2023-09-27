#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int totalServe = a+b;
	    int totalChanges = totalServe/c;
	    if(totalChanges%2==0) cout<<"CHEF"<<endl;
	    else cout<<"COOK\n";
	}
	return 0;
}

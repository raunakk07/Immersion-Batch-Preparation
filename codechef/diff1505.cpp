#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int one =0 ;
	    int zero =0;
	    while(n--){
	        int Ai;
	        cin>>Ai;
	        if(Ai == 1) one++;
		    else zero++;
	    }
	    cout<<min(one,zero) +max(0,one-zero) / 3<<endl;
	}
	return 0;
}

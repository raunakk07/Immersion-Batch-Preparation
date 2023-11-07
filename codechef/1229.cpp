#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int n;
	    cin>>n;
	    int coin[n];
	    double sum = 0;
	    for(int i =0;i<n;i++){
	        cin>>coin[i];
	        sum+=coin[i];
	    }
	    
	    
	    double mean = sum/n;
	    int ans;
	    int flag =0;
	    for (int j =0;j<n;j++){
	        if(coin[j] == mean){
	            ans = j+1; flag = 1;
	            break;
	            
	        }	        
	    }
	    if(flag) cout<<ans<<endl;
	    else cout<<"Impossible\n";
	}
	return 0;
}

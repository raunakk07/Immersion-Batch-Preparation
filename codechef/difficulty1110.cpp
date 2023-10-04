//question link = "https://www.codechef.com/problems/CHEFSTEP"

#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int n , k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i =0;i<n;i++) cin>>arr[i];
	    
	    int answer[n];
	    for(int i =0;i<n;i++){
	        if(arr[i]%k == 0) answer[i] = 1;
	        else answer[i] = 0;
	    }
	    for(int i = 0;i<n;i++) cout<<answer[i];
	    cout<<endl;
	}
	return 0;
}

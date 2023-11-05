//question link = 'https://codechef.com/problems/WARRIORCHEF?tab=statement'

#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int n,h;
	    cin>>n>>h;
	    int arr[n];
	    for(int i =0;i<n;i++) cin>>arr[i];
	    
	    int sum = accumulate(arr,arr+n,0);
	    if(sum<h) cout<<"0\n";
	    else{
	        sort(arr,arr+n,greater<int>());
	        int max_loosing_strength = 0;
	        int i;
	        for( i =0;i<n;i++){
	            if(max_loosing_strength<h) max_loosing_strength+=arr[i];
	            else break;
	            
	        }cout<<arr[i-1]<<endl;
	    }
	    
	}
	return 0;
}

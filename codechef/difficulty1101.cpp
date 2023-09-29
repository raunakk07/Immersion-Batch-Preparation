// link - https://www.codechef.com/problems/MAKEMONEY?tab=statement
//solution - 
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,c;
	    cin>>n>>x>>c;
	    int arr[n];
	    for(int i =0;i<n;i++){
	        cin>>arr[i];
	    }
	    int s=0 , cost=0;  
	    for(auto it:arr){
	        if((x-it)>c){  //we check if the difference between array element and x is more than the cost required, if not then we take it in account.
	            it = x;
	            cost+=c;
	        }s+=it;
	    }cout<<s-cost<<endl;
	}
	return 0;
}

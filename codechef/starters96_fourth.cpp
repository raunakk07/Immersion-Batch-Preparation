#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    int msum=0;
	    int arr[m];
	    for(int i=0;i<m;i++){ 
	        cin>>arr[i];
	        msum=msum+arr[i];
	    }
	    int sum = (n*(n+1))/2;
	    
	    
	    cout<<sum-msum<<endl;
	}
	return 0;
}

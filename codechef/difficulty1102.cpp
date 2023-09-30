// link = "https://www.codechef.com/problems/MSNSADM1?tab=statement"

// solution = 

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    for(int i =0;i<n;i++){
	        cin>>a[i];
	        a[i] = a[i]*20;
	        }
	    for(int i = 0;i<n;i++){
	        cin>>b[i];
	        b[i] = b[i]*10;
	    }
	    int answer =0;
	    for(int i =0;i<n;i++){
	        answer = max(a[i]-b[i],answer);
	    }cout<<answer<<endl;
	}
	return 0;
}

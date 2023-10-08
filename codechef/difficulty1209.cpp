//question link = "https://codechef.com/problems/LONGSEQ?tab=statement"

#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	        string n;
	        cin>>n;
	        
	        int one=0,zero=0;
	        
	        for(int i=0;i<n.length();i++){
	                if(n[i]=='1') one++;
	                else zero++;
	        }
	        if(one==1 || zero==1) cout << "Yes" << endl;
	        else cout << "No" << endl;
	}
	return 0;
}

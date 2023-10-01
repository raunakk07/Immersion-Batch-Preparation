// question link = "https://www.codechef.com/problems/CHEGLOVE?tab=statement"
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n; cin>>n;
	    int c[n];
	    int g[n];
	    for(int i =0;i<n;i++){
	        cin>>c[i];
	        
	    }for(int i =0;i<n;i++){
	        cin>>g[i];
	        
	    }
	    bool front =false;
	    bool back = false;
	    
	    
	    for(int i =0;i<n;i++){
	        if(c[i]<=g[i]){
	            front = true;
	            continue;
	        }else{
	            front = false;
	            break;
	        }
	    }
	    for(int i = 0;i<n;i++){
	        if(c[i]<=g[n-i-1]){
	            back = true;
	            continue;
	        }else{
	            back = false;
	            break;
	        }
	    }
	    if(front && back){
	        cout<<"both\n";
	    }
	    else if(front == true && back == false){
	        cout<<"front\n";
	    }
	    else if(front == false && back == true){
	        cout<<"back\n";
	    }else{
	        cout<<"none\n";
	    }
	}
	return 0;
}

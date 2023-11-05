//question link = "https://www.codechef.com/problems/TRICOIN"

#include <iostream>
using namespace std;

int main() {
    int tc; cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int count =0;
        for(int i =1;i<=n;i++){
            n = n-i;
            if(n>=0) count++;
        }
        cout<<count<<endl;
    }
    	return 0;
}

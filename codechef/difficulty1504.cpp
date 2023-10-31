#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int diff = abs(x-y);
        if(diff>=2){
            if(x<y) cout<<"chefinA\n";
            else cout<<"chef\n";
        }
        else{
            if(x == y){
                if(x%2 == 0) cout<<"chefina\n";
                else cout<<"chef\n";
            }
            else {
                int mini = min(x,y);
                if(mini%2) cout<<"chef\n";
                else cout<<"chefina\n";
            }
        }
    }
	return 0;
}

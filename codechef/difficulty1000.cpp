#include <iostream>
using namespace std;

void solution(){
    int n;
    string name;
    cin>>n>>name;
    int count =0;
    for(int i = 0;i<n;i++){
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
            count = 0;
            continue;
        }else {
            count++;
            if (count ==4) break;
        }
    }
    if(count<4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solution();
    }
	return 0;
}

//In a regular table tennis match, the player who serves changes every time after 2 points are scored, regardless of which players scored them.

// Chef and Cook are playing a different match — they decided that the player who serves would change every time after 
// �
// K points are scored instead (again regardless of which players scored them). When the game starts, it's Chef's turn to serve.

// You are given the current number of points scored by Chef and Cook (

// ​
//   and 
// �
// 2
// P 
// 2
// ​
//   respectively). Find out whether Chef or Cook has to serve next.///



#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int totalServe = a+b;
	    int totalChanges = totalServe/c;
	    if(totalChanges%2==0) cout<<"CHEF"<<endl;
	    else cout<<"COOK\n";
	}
	return 0;
}

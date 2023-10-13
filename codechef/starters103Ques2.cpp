#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int maxifeed = x / y;
        int result = min(maxifeed, 20); // Use the minimum of maxifeed and 20
        cout << result << endl;
	}
	return 0;
}

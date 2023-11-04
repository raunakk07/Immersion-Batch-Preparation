#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, n, tc;
	cin >> tc;
	
	while(tc--) {
        // A ordered map to store the frequiencies of Aeroplanes..
	    map<int, int> airplainFreq;
	    
	    cin >> n;
	    for(int i = 0; i < (n*2); i++) {
	        int currVal;
	        cin >> currVal;
	        airplainFreq[currVal]++;
	    }
	    int maxRunWays = 1;
	    for(auto i: airplainFreq) {
	        maxRunWays = (i.second > maxRunWays)? i.second: maxRunWays;
	    }
	    cout <<  maxRunWays << endl;
	}
	return 0;
}

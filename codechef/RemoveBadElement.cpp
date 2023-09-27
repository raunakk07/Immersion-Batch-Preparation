#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i =0;i<n;i++) cin>>arr[i];
	    
	    unordered_map<int, int> hash;
        for (int i = 0; i < n; i++)
            hash[arr[i]]++;
      
        // find the max frequency
        int max_count = 0, res = -1;
        for (auto i : hash) {
            if (max_count < i.second) {
                res = i.first;
                max_count = i.second;
            }
        }
        int answer =0;
	    for(int i =0;i<n;i++){
	        if(arr[i]!=res){
	            answer++;
	        }
	    }cout<<answer<<endl;
	}
	return 0;
}

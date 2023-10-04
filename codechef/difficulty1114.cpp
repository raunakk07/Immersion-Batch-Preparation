//question link = "https://www.codechef.com/problems/VOTERS?tab=statement"

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z;
	cin>>x>>y>>z;
	map<int,int> mp; // mistake made that if we need sequence of element in sorted order, we need map instead of unordered map
	for(int i =0;i<(x+y+z);i++){
	    int a; cin>>a; 
	    mp[a]++;
	}
	vector<int> answer;
	
	for(auto it : mp){
	    if(it.second>1) answer.push_back(it.first);
	}
	cout<<answer.size()<<endl;
	for(auto it : answer){
	    cout<<it<<endl;
	}
	return 0;
}

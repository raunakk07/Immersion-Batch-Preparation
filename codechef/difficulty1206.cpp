//question link = "https://www.codechef.com/problems/RECNDSTR?tab=statement"

#include <iostream>
using namespace std;

string lshift(string s){
    return s.substr(1,s.length()-1) + s.substr(0,1);
    
}

string rshift(string s){
    return s.back() +s.substr(0 , s.length() - 1);
}


int main() {
	int t; cin>>t;
	while(t--){
	    string s; cin>>s;
	    cout<<((lshift(s) == rshift(s)) ? "YES" : "NO")<<endl;
	}
	return 0;
}

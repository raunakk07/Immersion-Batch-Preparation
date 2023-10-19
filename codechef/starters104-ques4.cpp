//question link = "https://www.codechef.com/problems/GCDLM?tab=statement"

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 
  
// Function to return LCM of two numbers  
int lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b; 
} 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x , y ,k;
	    cin>>x>>y>>k;
	    for(int i =0;i<k;i++){
	        int no1 = gcd(x ,y);
	        int no2 = lcm(x , y);
	        int replace = max(x , y);
	        if(replace == x) x = min(no1,no2);
	        else y = min(no1,no2);
	    }
	    cout<<x+y<<endl;
	}
	return 0;
}

// link = "https://www.codechef.com/problems/ODDEVENBS?tab=statement"

// explanation = "The total frequencies of all the elements must be equal to the size of the array. We do not need the exact frequencies. We should note that if size of array is even, the sum of frequencies should also be even, and same goes for odd size.
// If nature of sum (odd or even) matches with that of size, the answer is YES, otherwise NO.
// We know, even + even = even (0 + 0 = 0), even + odd = odd (0 + 1 = 1), odd + even = odd (1 + 0 = 1), odd + odd = even (1 + 1 = 0),
// This is just XOR operation. We XOR all the values of the array. To check if size is even or odd, we AND it with 1. If result is 0, it is even, and if result is 1, it is odd. (% operation will also do, but it is slower).Finally, we check if the natures match.

//solution - 
#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int n , answer =0;
	    cin>>n;
	    int b[n];
	    for(int i =0;i<n;i++){
	        cin>>b[i];
	        answer = answer ^ b[i]; // ^ is exor operator
	    }
	    if((n&1) == answer) cout<<"yes\n";
	    else cout<<"no\n";
	    
	}
	return 0;
}




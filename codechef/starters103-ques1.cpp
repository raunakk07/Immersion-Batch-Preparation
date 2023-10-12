#include <iostream>
using namespace std;

int main() {
	int x; cin>>x;
	if(x<3) cout<<"gold\n";
	else if(x>=3 && x<6) cout<<"silver\n";
	else cout<<"bronze\n";
	return 0;
}

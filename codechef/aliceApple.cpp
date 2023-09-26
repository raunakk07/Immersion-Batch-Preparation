#include<bits/stdc++.h>
using namespace std;

int minApples(int M,int K,int N,int S,int W,int E){
	
	if(M <= S * K)
		return M;

	
	else if(M <= S * K + E + W)
		return S * K + (M-S * K) * K;

	
	else
		return -1;

}


int main(){
	

	int M ;
	int K;
    int N;
    int S ;
    int W;
	int E;
    cin>>M>>K>>N>>S>>W>>E;

	
	int ans = minApples(M,K,N,S,W,E);
	cout<<ans<<endl;

}



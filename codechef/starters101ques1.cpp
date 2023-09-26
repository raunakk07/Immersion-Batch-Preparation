#include<bits/stdc++.h>
using namespace std;

int solve(int x ,int y){
    return (x+y)*10 +1;
}

int main(){
    int x, y;
    cin>>x>>y;
    int answer = solve(x,y);
    cout<<answer<<endl;
}
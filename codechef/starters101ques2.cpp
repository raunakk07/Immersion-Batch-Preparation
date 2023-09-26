#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int l , x , y;
        cin>>l>>x>>y;
        int timeX = ceil(l*1.0/x);
        int timeY = ceil(l*1.0/y);
        if(timeY>=timeX){
            cout<<-1<<endl;
        }else{
            cout<<timeX-timeY-1<<endl;
        }
    }
}
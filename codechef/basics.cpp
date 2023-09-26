#include<bits/stdc++.h>
using namespace std;

void function1(int i, int n){
    if(i>n) return;
    cout<<"abc"<<endl;

    function1(i+1,n);
    
}

void function2(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    function2(i+1,n);
}

void function3(int i , int n){      //print n to i using backtracking
    if(i>n) return;
    function3(i+1,n);
    cout<<i<<" ";
}

void function4(int i, int n){       //print n to 1 without backtracking
    if(i<1) return;
    cout<<i<<' ';
    function4(i-1,n);

}
int main(){
    int n;
    cin>>n;
    // function1(1,n);
    // function2(1,3);
    // function3(1,4);
    function4(n,n);

}
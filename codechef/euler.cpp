#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    
    if (a == 0)
        return b;
    if (b == 0)
        return a;
 
    
    if (a == b)
        return a;
 
    
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
 
int main(){
    int n;
    cin>>n;
    int count=0;

    for(int i =0;i<n;i++){
        int hcf = gcd(i,n);
        if(hcf==1) count++;


    }
    cout<<count;
}

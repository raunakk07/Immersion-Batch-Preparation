// given an array, find the number of subsequence that result in a particular sum 

#include<bits/stdc++.h>
using namespace std;

int countNoOfSubsequence(int ind,int s,int sum,int arr[],int n){
    if(ind == n){
        if(s == sum) return 1;
        else return 0;
    }
    //pick
    s += arr[ind];
    int l = countNoOfSubsequence(ind+1,s,sum,arr,n);
    //not pick 
    s -= arr[ind];
    int r = countNoOfSubsequence(ind+1,s,sum,arr,n);
    return l+r;
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>>arr[i];
    int sum;
    cin>>sum;
    
    cout<<countNoOfSubsequence(0,0,sum,arr,n);
}
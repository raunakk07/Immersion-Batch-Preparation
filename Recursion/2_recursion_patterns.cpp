#include <bits/stdc++.h>
using namespace std;

//checking if a subsequence if equal to a particular sum value
void printF(int index, vector<int> &ds, int s , int sum , int arr[], int n){
        if(index == n){
        if(s == sum){ 
            for(auto it : ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    //pick 
    ds.push_back(arr[index]);
    s+=arr[index];
    printF(index+1,ds,s,sum,arr,n);
    s-=arr[index];
    ds.pop_back();
    
    //not pick
    printF(index+1,ds,s,sum,arr,n);

}


int main(){
    int arr[] = {1,2,1};
    int n =3;
    int sum =2;
    vector<int> ds;
    printF(0,ds,0,sum,arr,n);
    

}
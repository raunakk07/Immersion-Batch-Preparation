#include<bits/stdc++.h>
using namespace std;
int partition(vector <int> &arr,int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i] <=pivot && i<=high-1) i++;
        while(arr[i] >pivot && j>=low+1) j--;
        if(i<j) swap(arr[i], arr[j]);
        

    }
        swap(arr[j],arr[low]);
        return j;
}

void qS(vector <int> &arr,int low, int high){
    
    if(low<high){
        int pIndex = partition(arr,low,high);
        cout<<arr[pIndex]<<endl;
        qS(arr,low,pIndex-1);
        qS(arr,pIndex+1,high);
    }
    else{return;}
}



int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n ; i++) cin>>arr[i];
    qS(arr,0,n-1);
    for(auto i: arr) cout<<i<<" ";
}
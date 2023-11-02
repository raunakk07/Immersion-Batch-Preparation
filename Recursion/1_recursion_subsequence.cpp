//Print all subsequence of an array
//input - {3,1,2}
//output - (3) (3,1) (3,1,2) (1,2) (2) (1) () (3,2)

#include<bits/stdc++.h>
using namespace std;
void printF(int i , vector <int> &ds , int arr[], int n){
    if(i ==n){
        for(auto it : ds) cout<<it<<" ";
        cout<<endl;
        return;
    }
    //take or pick the particular index into the subsequence
    ds.push_back(arr[i]);
    printF(i+1,ds,arr,n);
    ds.pop_back();
    //not pick , or not take condition,this element is not added to the subsequence
    printF(i+1,ds,arr,n);
}
int main(){
    int arr[] = {3,1,2};
    int n =3;
    vector<int> ds;
    printF(0,ds,arr,n);
}

#include<bits/stdc++.h>
using namespace std;
//suppose we just have to print one of the conditions of sum of subsequence being equal to some given sum
// now our recursion call will return true if the condition fullfilled and break and false and continue if  not



bool printF(int index, vector<int> &ds, int s , int sum , int arr[], int n){
        if(index == n){
        if(s == sum){ 
            for(auto it : ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        //condtion not satisfied
        else return false;
    }
    //pick 
    ds.push_back(arr[index]);
    s+=arr[index];
    if(printF(index+1,ds,s,sum,arr,n)) return true;
    s-=arr[index];
    ds.pop_back();
    
    //not pick
    if(printF(index+1,ds,s,sum,arr,n)) return true;
    return false;
}


int main(){
    int arr[] = {1,2,1};
    int n =3;
    int sum =2;
    vector<int> ds;
    printF(0,ds,0,sum,arr,n);
    

}

#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> p = {1,5};
    cout<< p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>> p2 = {1,{2,4}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    pair<int,int> array[] = {{1,2},{3,4},{4,5}};
    for(int i =0;i<3;i++){
        cout<<array[i].second<<" ";
    }
}

void explainVectors(){
    vector<int> v(5,10); //initialized a vector of size 5 with each value being 5.
    v.push_back(1);
    v.emplace_back(3);

    vector<pair<int,int>> v2; //creating a vector that takes values in pair.
    v2.push_back({1,2});

    vector<int> v2(v); //copied data of v in a new vector v2.


    for(auto it:v2){
        cout<<it<<endl;
    }
}


int main(){
    explainVectors();
}
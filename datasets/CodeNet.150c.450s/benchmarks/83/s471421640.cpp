#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int N,W;
vector<int> v,w;
vector<vector<int>> dp(110,vector<int>(10100,-1));
int rec(int i,int j){
    if(dp.at(i).at(j)>=0){
        return dp.at(i).at(j);
    }
    int res;
    if(i==N) res=0;
    else if(j<w.at(i)){
        res=rec(i+1,j);
    }
    else {
        res=max(rec(i+1,j),rec(i+1,j-w.at(i))+v.at(i));
    }
    return dp.at(i).at(j)=res;
}

int main(){
cin>>N>>W;
v.resize(N);
w.resize(N);
for(int i=0;i<N;i++){
    cin>>v.at(i)>>w.at(i);
}
cout<<rec(0,W)<<endl;
}

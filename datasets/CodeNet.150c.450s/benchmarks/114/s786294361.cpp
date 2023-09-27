#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int root(int i,vector<int> &parent){
    if(parent[i]==-1){
        //親がいない時
        return i;
    }else{
        int result=root(parent[i],parent);
        parent[i]=result; //パス圧縮
        return result;
    }
}

void unite(int x,int y,vector<int> &parent){
    if(root(x,parent)!=root(y,parent)){
        parent[root(y,parent)]=root(x,parent);
    }
}

bool issame(int x,int y,vector<int> &parent){
    return root(x,parent)==root(y,parent);
}

int main(){
    int n;
    cin >> n;
    //first:cost,second:(first:from,second:to)
    vector<pair<int,pair<int,int> > > bridges(n*n);

    //入力
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int cost;
            if(cin >> cost,cost!=-1){
                bridges.push_back(pair<int,pair<int,int> >(cost,pair<int,int>(i,j)));
            }
        }
    }

    //sort
    sort(bridges.begin(),bridges.end());

    //島を管理する用
    vector<int> parents(n*n,-1);

    int sum=0;

    for(int i=0;i<bridges.size();++i){
        if(!issame(bridges[i].second.first,bridges[i].second.second,parents)){
            unite(bridges[i].second.first,bridges[i].second.second,parents);
            sum+=bridges[i].first;
        }
    }
    cout << sum << endl;
}

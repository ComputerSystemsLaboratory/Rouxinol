#include<bits/stdc++.h>
using namespace std;

int times;
vector<vector<int> > lists;
vector<int> stampA;
vector<int> stampB;

void dfs(int point){
    times++;
    stampA.at(point-1)=times;
    for(int i=0;i<(int)lists.at(point-1).size();i++){
        if(stampA.at(lists.at(point-1).at(i)-1)==0) dfs(lists.at(point-1).at(i));
    }
    times++;
    stampB.at(point-1)=times;
    
}

int main(){
    times=0;
    int n;
    cin >> n;
    lists.resize(n,vector<int>());
    stampA.resize(n,0);
    stampB.resize(n,0);
    for(int i=0;i<n;i++){
        int u,k;
        cin >> u >> k;
        for(int j=0;j<k;j++){
            int v;
            cin >> v;
            lists.at(u-1).push_back(v);
        }
    }
    
    for(int i=0;i<n;i++){
        if(stampA.at(i)==0) dfs(i+1);
    }
    
    for(int i=0;i<n;i++){
        cout << i+1 << " " << stampA.at(i) << " " << stampB.at(i) << endl;
    }
}

#include <iostream>
#include <vector>
#include <queue>
#include <iomanip>//cout << fixed << setprecision() <<
#include <set>
#include <map>
using ll = long long;
using namespace std;
vector<vector<int>> v;
vector<int> v2;
queue<int> q;

void monmo(int n){
    int momo;
    for(int i=0;i<v[n].size();i++){
        if(v2[v[n][i]]==0){
            v2[v[n][i]]=n;
            q.push(v[n][i]);
        }
    }
    if(!q.empty()){
        momo=q.front();q.pop();
        monmo(momo);
    }
}

int main(void){
    int n,m;
    int a,b;
    cin>>n>>m;
    v.emplace_back(); //v[0]は無視
    v2.push_back(0);//v2[0]は無視
    for(int i=0;i<n;i++){
        v.emplace_back();
        v2.push_back(0);
    }
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    monmo(1);
    cout<<"Yes"<<endl;
    for(int i=2;i<=n;i++){
        cout<<v2[i]<<endl;
    }
    
}

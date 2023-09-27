#include<bits/stdc++.h>

using namespace std;

int n,m;
vector<int> susjed[100005];
int closest[100005];


void bfs(int start){
    closest[start]=1;
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(int i=0;i<susjed[cur].size();i++){
            if(closest[susjed[cur][i]]==0){
                closest[susjed[cur][i]]=cur;
                q.push(susjed[cur][i]);
            }
        }
    }
}

int main(){
    cin >>n>>m;
    int a,b;
    for(int i=0;i<m;i++){
        cin >> a>>b;
        susjed[a].push_back(b);
        susjed[b].push_back(a);
    }
    memset(closest,0,sizeof(closest));
    /*for(int i=1;i<=n;i++){
        cout <<i<<":"<<endl;
        for(int j=0;j<susjed[i].size();j++){
            cout <<susjed[i][j]<<endl;
        }
    }*/
    bfs(1);
    bool t=true;
    for(int i=1;i<=n;i++){
        if(closest[i]==0)
            t=false;
    }
    if(!t){
        cout <<"No"<<endl;
        return 0;
    }
    cout <<"Yes"<<endl;
    for(int i=2;i<=n;i++){
        cout <<closest[i]<<endl;
    }
}

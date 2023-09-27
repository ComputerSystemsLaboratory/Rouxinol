#include<bits/stdc++.h>

using namespace std;
int V;
vector<int> G[102];
bool vis[102];
int d[102];
const int inf=0x3f3f3f;

void bfs(int s=1){
    d[s]=0;
    queue<int> que;
    que.push(s);
    while(!que.empty()){
        int t=que.front();
        que.pop();
        vis[t]=true;
        for(int i=0;i<G[t].size();i++){
            if(!vis[G[t][i]]){
                que.push(G[t][i]);
                d[G[t][i]]=min(d[G[t][i]],d[t]+1);
            }
        }
    }
}


int main(){
    cin>>V;
	int i;
	for(int i=1;i<=V;i++){
        d[i]=inf;
        vis[i]=false;
	}
    for(i=1;i<=V;i++){
        int id,k;
        cin>>id>>k;
        while(k--){
            int out;
            cin>>out;
            G[id].push_back(out);
        }
        sort(G[id].begin(),G[id].end());
    }
    bfs();
    for(int i=1;i<=V;i++){
        cout<<i<<" "<<(d[i]==inf?-1:d[i])<<endl;
    }
    return 0;
}
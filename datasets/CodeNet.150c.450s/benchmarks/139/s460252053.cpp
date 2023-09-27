#include <bits/stdc++.h>
using namespace std;
typedef vector< vector<int> > vvi;
typedef vector< vector<bool> > vvb;
typedef vector< vector<char> > vvc;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<char> vc;

void bfs(const vvi &adlist, vi &arrive, int s){
    queue<int> que;
    que.push(s);
    arrive[s]=1;
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int next : adlist[v]){
            if(arrive[next]!=0) continue;
            arrive[next]=v;
            que.push(next);
        }
    }
    return;
}

int main(){
    int N,M;
    cin >> N >> M;
    vvi adlist(N+1,vi());
    for(int i=0;i<M;i++){
        int a,b;
        cin >> a >>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }
    vi arrive(N+1,0);
    bfs(adlist,arrive,1);
    bool flag=false;
    for(int i=2;i<=N;i++){
        if(arrive[i]==0) flag=true;
    }
    if(flag) cout << "No" << endl;
    else{
        cout << "Yes" << endl;
    }
    for(int i=2;i<=N;i++){
        cout << arrive[i] << endl;
    }
}
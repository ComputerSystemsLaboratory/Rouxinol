#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
#define FOR(i, r, n) for (int i=(int)(r); i<=(int)(n); i++)
#define all(v) v.begin(), v.end()
#define INF 2147483647
#define INF64 9223372036854775807
#define MOD 1000000007

struct BFS{

    vector<vector<int>> data;
    vector<bool> ch;
    vector<int> dis, bef;
    queue<int> q;

    void set(int n){
        rep(i, n+1){
            data.push_back(vector<int>());
            ch.push_back(false);
            dis.push_back(0);
            bef.push_back(0);
        }
        return;
    }

    void cn(int a, int b){
        data[a].push_back(b);
        data[b].push_back(a);
        return;
    }

    void root(int x){
        dis[x]=dis[bef[x]]+1;
        for(int i: data[x]){
            if(!ch[i]){
                q.push(i);
                bef[i]=x;
                ch[i]=true;
            }
        }
        return;
    }

    void search(int x){
        bef[x]=0;
        dis[0]=-1;
        ch[x]=true;
        for(int i: data[x]){
            if(!ch[i]){
                q.push(i);
                bef[i]=x;
                ch[i]=true;
            }
        }
        while(!q.empty()){
            root(q.front());
            q.pop();
        }
        return;
    }

    int dtc(int x){
        return dis[x];
    }

    int bfr(int x){
        return bef[x];
    }

};

int main(){

    cout<<"Yes"<<endl;

    int n, m; cin>>n>>m;

    BFS bfs;
    bfs.set(n);

    rep(i, m){
        int a, b; cin>>a>>b;
        bfs.cn(a, b);
    }

    bfs.search(1);

    FOR(i, 2, n){
        cout<<bfs.bfr(i)<<endl;
    }

}
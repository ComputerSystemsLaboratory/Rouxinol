// 連結成分
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define NIL -1

vector<int> G[100005];
int color[100005];
int n,col;

void dfs(int r, int c);
void assign_number();

int main(){
    int m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int s,t; cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    col = 0;
    assign_number();
    
    int q;
    cin >> q;
    
    for(int i = 0; i < q; i++){
        int s,t; cin >> s >> t;
        cout << (color[s] == color[t] ? "yes" : "no") << endl;
    }
    return 0;
}

void assign_number(){
    // 未訪問の頂点を選んで探索していく
    for(int i = 0; i < n; i++){
        color[i] = NIL;
    }

    for(int i = 0; i < n; i++){
        if(color[i] == NIL){
            dfs(i,col); col++;
        }
    }
}

void dfs(int r, int c){
    // 頂点rから探索しそのグループにcの番号をふる
    stack<int> s;
    s.push(r);
    color[r] = c;

    while(!s.empty()){
        int top = s.top();
        s.pop();
        int size = G[top].size();
        for(int i = 0; i < size; i++){
            int v = G[top][i];
            if(color[v] == NIL){
                // まだ探索されていない頂点
                color[v] = c;
                s.push(v);
            }
        }
    }

}

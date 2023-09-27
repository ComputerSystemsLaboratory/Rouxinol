#include <cstdio>
#include <cstring>
#include <stack>
#define N 110
using namespace std;
stack<int> s;
int n;
int m[N][N];
int used[N];
int time = 1;
int bb_start[N];
int bb_end[N];
int getnext(int u){
    for(int i = 1; i <= n; i++){
        if(m[u][i] == 1 && used[i] == 0) return i;
    }
    return -1;
}
void dfs(int root){
    used[root] = 1;
    bb_start[root] = time++;

    while(!s.empty()) s.pop();
    s.push(root);
    while(!s.empty()){
        int u = s.top();
        int v = getnext(u);
        if(v != -1 && used[v] == 0){
            used[v] = 1;
            bb_start[v] = time++;
            s.push(v);
        } else{
            bb_end[u] = time++;
            s.pop();
        }
    }
}
int main(){
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) m[i][j] = 0;
    for(int i = 0; i < N; i++) used[i] = 0;
    scanf("%d", &n);
    for(int p = 0; p < n; p++){
        int node, k;
        scanf("%d %d", &node, &k);
        for(int i = 0; i < k; i++){
            int b;
            scanf("%d", &b);
            m[node][b] = 1;
        }
    }
    for(int i = 1; i <= n; i++) if(used[i] == 0) dfs(i);
    for(int i = 1; i <= n; i++){
        printf("%d %d %d\n", i, bb_start[i], bb_end[i]);
    }
    return 0;
}

#include <cstdio>
#include <iostream>
#include <cstring>
#include <set>
#include <algorithm>
#define FOREVER for (;;)
#define FOR(i,a,b) \
for (int (i)=(a);(i)<(b);(i)++)
#define REP(i,a,b) \
for (int (i)=(a);(i)<=(b);(i)++)
#define log(exp) \
printf(#exp" = %d\n", exp)
#define INF 100000000
using namespace std;

const int maxn = 10+3;
int graph[maxn][maxn];
set<int> Set;

int main(void) {
    int N;
    while (cin>>N && N) {
        FOR(i,0, maxn) FOR(j, 0, maxn) graph[i][j] = INF;
        //?????´??°??? fill
        FOR(i,0,10) graph[i][i] = 0;
        
        REP(i,1,N) {//rep N ??????6
            int u,v,d;
            cin>>u>>v>>d;
            graph[u][v] = graph[v][u] = d;
            Set.insert(u);
            Set.insert(v);
        }
        
        FOR(k,0,10)
            FOR(i,0,10)
                FOR(j,0,10)
        graph[i][j] = min(graph[i][j], graph[i][k]+graph[k][j]);
        
        int ans = INF, ansNode = 0;
        set<int>::iterator it;
        for (it = Set.begin(); it!=Set.end(); it++) {
            int node = *it;
            int res = 0;
            set<int>::iterator anotherIt;
            for (anotherIt = Set.begin(); anotherIt!=Set.end(); anotherIt++)
                res+=graph[node][*anotherIt];
            if (res<ans) ans = res, ansNode = node;
        }
        
        printf("%d %d\n", ansNode, ans);
        //clear
        Set.clear();
    }
    
    return 0;
}
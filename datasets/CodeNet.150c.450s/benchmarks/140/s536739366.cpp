#include <iostream>
#include <queue>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

/*
 * union-find???????£??????\???????????????
 */
#define MAX_V 10001

typedef struct UF{
    int parent;
}UF;

UF uf[MAX_V + 1];

/*
 * ?????????idx???parent??¨???????????????????¨??????????
 */
void initialize(int num){
    int i ;
    
    for (i=1; i <= num; i++) {
        uf[i].parent = i;
    }
}
/*
 * ??????????±?????????°????????????????????????
 */
int find(int a){
    
    if (a == uf[a].parent) {
        return a;
    }
    
    return uf[a].parent = find(uf[a].parent);
}

int isSame(int a, int b){
    
    if (find(a) == find(b)) {
        return 1;
    }
    else{
        return 0;
    }
}

void unite(int a, int b){
    a = find(a);
    b = find(b);
    
    if (a == b) {
        return;
    }
    
    uf[b].parent = a;
    
}

/*
 * ??\??????Kruskal??????????????°??????(??????????????\????????¨??????????£?)
 * ?¢???????????????????X?????????????????¢???????????????X???????????????????????¨??§????°???¨?????¨????±???????
 */

#define MAX_V 10001
#define MAX_E 100001
#define INF INT_MAX

typedef struct edge{
    int from;
    int to;
    int cost;
}edge;

edge es[MAX_E];

// cost?????????????????¢??°
bool cmp(const edge& e1, const edge& e2){
    return e1.cost < e2.cost;
}

/*
 * e:???????????°
 * v:?????????????????°
 */
int Kruskal(int e, int v){
    
    int res = 0;
    
    //?????????????????????????????????
    sort(es, es + e, cmp);
    
    //union-find????????????
    initialize(v);
    
    for (int i = 0; i< e; i++) {
        edge e = es[i];
        if (!isSame(e.from, e.to)) {
            unite(e.from, e.to);
            res += e.cost;
        }
    }
    
    return res;
}

int main( ){
    
    int i, V, E, u, v, c, ans;
    cin >> V >> E;

    for (i = 0; i < E; i++) {
        cin >> u >> v >> c;
        es[i].from = u;
        es[i].to = v;
        es[i].cost = c;
    }
    
    ans = Kruskal(E, V);
    
    cout << ans << endl;
    
    
    return 0;
}
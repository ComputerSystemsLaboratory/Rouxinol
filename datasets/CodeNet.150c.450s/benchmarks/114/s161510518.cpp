#include<iostream>
using namespace std;
#include<stdio.h>

class union_find  // union find.
{
    int* U;
public:
    union_find(int n){ U = new int [n + 1]; for(int i = 1; i <= n; i++) U[i] = i; }
    int root(int a){ if(U[a] == a){ return a; } U[a] = root(U[a]); return U[a]; }
    bool same(int a, int b){ return root(a) == root(b); }
    void join(int a, int b){ int x = root(a), y = root(b); U[x] = y; }
    ~union_find(){ delete [] U; }
};

struct edge{ int v1, v2; int weight; };  // edge.

edge init(){
    edge e;
    e.v1 = 0; e.v2 = 0; e.weight = -1;
    return e;
}

edge init(int a, int b, int w){
    edge e;
    e.v1 = a; e.v2 = b; e.weight = w;
    return e;
}

void swap_e(edge e1, edge e2)
{
    swap(e1.v1, e2.v1); swap(e1.v2, e2.v2); swap(e1.weight, e2.weight);
}

class edge_heap  // heap.
{
    edge* E;
    int edge_n;
public:
    edge_heap(int n){ E = new edge [n + 1]; edge_n = 0; }
    void min_heap(int i);
    void insert_heap(edge e);   // sorting.
    void insert_nl(edge e);     // no sorting.
    edge delete_min();
    bool isEmpty(){ return edge_n == 0; }
    int total_weight();
    ~edge_heap(){ delete [] E; }
};

void edge_heap::min_heap(int i)
{
    int l = 2 * i, r = 2 * i + 1;
    if(l > edge_n && r > edge_n) return;
    int minid = i;
    if(l <= edge_n){ if(E[l].weight < E[minid].weight) minid = l; }
    if(r <= edge_n){ if(E[r].weight < E[minid].weight) minid = r; }
    if(minid == i) return;
    swap(E[minid], E[i]);
    min_heap(minid);
}

void edge_heap::insert_heap(edge e)
{
    edge_n++;
    int w = e.weight;
    int i = edge_n;
    while(i > 1){
        if(w < E[i / 2].weight){
        E[i] = E[i / 2];
        }else{ break; }
        i /= 2;
    };
    E[i] = e;
}
void edge_heap::insert_nl(edge e){ edge_n++; E[edge_n] = e; }

edge edge_heap::delete_min()
{
    edge e = E[1];
    E[1] = E[edge_n]; edge_n--;
    min_heap(1);
    return e;
}

int edge_heap::total_weight()
{
    int tw = 0;
    for(int i = 1; i <= edge_n; i++) tw += E[i].weight;
    return tw;
}

int main()
{
    int n, i, j, w;
    scanf("%d", &n);
    edge_heap EH(n * (n + 1) / 2); // All Edge heap.
    edge e;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            scanf("%d", &w);
            if(j <= i || w < 0) continue;
            e = init(i, j, w);
            EH.insert_heap(e);
        }
    }

    edge_heap TH(n);   // Tree heap.

    union_find VG(n);  // vertex group.

    while(!EH.isEmpty()){
        e = EH.delete_min();
        if(!VG.same(e.v1, e.v2)){
            VG.join(e.v1, e.v2);
            TH.insert_nl(e);
        };
    };

    printf("%d\n", TH.total_weight());

    return 0;
}
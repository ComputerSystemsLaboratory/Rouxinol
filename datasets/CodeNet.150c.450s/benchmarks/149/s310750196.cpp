#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<climits>
#include<cstring>
#include<queue>
using namespace std;

const int MAX_N = 10010;
typedef unsigned long long ull;
typedef long long ll;
const ull mod = 1000000000 + 7;
#define REP(i,n) for(int i=0;i<(int)n;++i)

struct query{
    int com, x, y;
};

struct UnionFind{
    int N;
    int par[MAX_N];
    int rank[MAX_N];

    UnionFind(int N): N(N){
        for (int i=0;i<N;i++){
            par[i] = i;
            rank[i] = 0;
        }
    }

    int root(int x){
        if(par[x] == x) return x;
        int rx = root(par[x]);
        par[x] = rx;
        return rx;
    }

    void unite(int x, int y){
        int rx = root(x);
        int ry = root(y);
        if(rx==ry) return;

        if(rank[rx] < rank[ry]){
            par[rx] = ry;
        }else{
            par[ry] = rx;
            if(rank[rx]==rank[ry]){
                rank[rx]++;
            }
        }
    }

    bool find(int x, int y){
        return root(x) == root(y);
    }
};

void solveUnionFindComplete(vector<query> &queries, int n){
    UnionFind uf(n);
    REP(i, queries.size()){
        query Q = queries[i];
        if(Q.com == 0){
            uf.unite(Q.x, Q.y);
        }else{
            cout << uf.find(Q.x, Q.y) << endl;
        }
    }
}

int main(){
    int n, q;
    cin >> n >> q;
    vector<query> queries;
    REP(i, q){
        query que;
        cin >> que.com >> que.x >> que.y;
        queries.push_back(que);
    }
    solveUnionFindComplete(queries, n);
    return 0;
}
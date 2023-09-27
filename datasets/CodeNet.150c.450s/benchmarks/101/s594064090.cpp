#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
#include <set>
#include <map>
#include <queue>
#include <limits.h>
#include <cmath>

using namespace std;

#define rip(i,n,s) for (int i=(s);i<(int)(n);i++)
#define all(a) (a).begin(),(a).end()
typedef long long ll;

struct UnionFind{
    int size;
    vector<int> par;
    vector<int> rank;
    UnionFind(int x){
        size=x;
        par=vector<int> (x);
        rank=vector<int> (x,1);
        for (int i=0;i<x;i++){
            par[i]=i;
        }
    }
    int root(int x){
        if(par[x]==x){
            return x;
        }
        else{
            return par[x]=root(par[x]);
        }
    }
    void unite(int x,int y){
        x=root(x);y=root(y);
        if(x==y){
            return;
        }
        if(rank[x]<rank[y]){
            par[x]=y;
        }
        else{
            par[y]=x;
        }
        if(rank[x]==rank[y]){
            rank[x]++;
        }
    }
    bool check(int x,int y){
        return root(x)==root(y);
    }
    void initialize(){
        for (int i=0;i<size;i++){
            par[i]=i;
        }
    }
};

int main(){
    int n,m;
    cin >> n >> m;
    UnionFind uf(n);
    int a,b;
    rip(i,m,0){
        cin >> a >> b;
        uf.unite(a,b);
    }
    int q;
    cin >> q;
    vector<bool> ans(q);
    rip(i,q,0){
        cin >> a >> b;
        ans[i]=uf.check(a,b);
    }
    rip(i,q,0){
        if(ans[i]){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
}

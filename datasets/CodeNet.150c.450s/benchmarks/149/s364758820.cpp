#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <queue>
#include <cctype>
#include <climits>
#include <stack>
 
using namespace std;
 
typedef long long LL;
 
struct edge{LL from,to,cost;};
 
template <typename T>
class UF{
public:
    vector<T> par,rank;
 
    UF(T n){
        par.resize(n);
        rank.resize(n);
        for(T i=0;i<n;i++){
            par[i]=i;
            rank[i]=0;
        }
    }
 
    T find(T x){
        if(par[x]==x)
            return x;
        else
            return par[x]=find(par[x]);
    }
 
    void unite(T x, T y){
        x=find(x);
        y=find(y);
        if(x==y) return;
 
        if(rank[x]<rank[y])
            par[x]=y;
        else{
            par[y]=x;
            if(rank[x] == rank[y]) rank[x]++;
        }
    }
 
    bool same(T x, T y){
        return find(x)==find(y);
    }
 
};
int main(){
	int n,q;
	cin>>n>>q;
	
	UF<int> uf(n);
	
	for(int i=0;i<q;i++){
		int c,x,y;
		cin>>c>>x>>y;
		
		if(c) cout<<uf.same(x,y)<<endl;
		else uf.unite(x,y);
	}
	
}
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

template <typename T>
class UF{
public:
	T par[10000],rank[10000];
 
    inline UF(T n){
        for(T i=0;i<n;i++){
            par[i]=i;
            rank[i]=0;
        }
    }
 
    inline T find(T x){
        if(par[x]==x)
            return x;
        else
            return par[x]=find(par[x]);
    }
 
    inline void unite(T x, T y){
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
 
    inline bool same(T x, T y){
        return find(x)==find(y);
    }
 
};
int main(){
	int n,q;
	scanf("%d %d",&n,&q);
	
	UF<int> uf(n);
	int c,x,y;
	while(q--){
		scanf("%d %d %d",&c,&x,&y);
		
		
		if(c)printf("%d\n",uf.same(x,y));
		else uf.unite(x,y);
	}
	
}
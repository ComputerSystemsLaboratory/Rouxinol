#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define EMAX 100000
#define NOT -1

typedef long long LL;

/////Union-Find
LL par[EMAX];
LL rnk[EMAX];
 
//n要素で初期化
void UNinit(LL n){
    for(LL i=0;i<=n;i++){
        par[i]=i;
        rnk[i]=0;
    }
}
 
//木の根を求める
LL UNfind(LL x){
    if(par[x]==x){
        return x;
    }else{
        return par[x]=UNfind(par[x]);
    }
}
 
//xとyの属する集合を併合
void UNunite(LL x,LL y){
    x=UNfind(x);
    y=UNfind(y);
    if(x==y) return;
    if(rnk[x]<rnk[y]){
        par[x]=y;
    }else{
        par[y]=x;
        if(rnk[x]==rnk[y]) rnk[x]++;
    }
}
 
//xとyが同じ集合に属するか否か
bool UNsame(LL x,LL y){
    return UNfind(x)==UNfind(y);
}

struct ed{
	int u,v,co;
};

bool comp(const ed& e1,const ed& e2){
	return e1.co<e2.co;
}

int main(void){

	int V,E;
	int s,t,w;
	ed es[EMAX];

	cin>>V>>E;

	for(int i=0;i<E;i++){
		cin>>s>>t>>w;
		es[i].co=w;
		es[i].u=s;
		es[i].v=t;
	}

	sort(es,es+E,comp);
	UNinit(V);
	int res=0;
	for(int i=0;i<E;i++){
		ed e=es[i];
		if(!UNsame(e.u,e.v)){
			UNunite(e.u,e.v);
			res+=e.co;
		}
	}
	cout<<res<<endl;
}
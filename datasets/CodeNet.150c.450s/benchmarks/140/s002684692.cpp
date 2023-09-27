#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reg(i,a,b) for(int i=(a);i<=(b);i++)
typedef long long int lli;
typedef pair<int,int> mp;
typedef pair<int,mp> mmp;
#define fir first
#define sec second


struct unifo{
	int un;
	int uni[100005];
	void init(int n){
		rep(i,n)uni[i]=i;
		un=n;
	}
	int find(int p){
		if(uni[p]==p)return p;
		else return (uni[p]=find(uni[p]));
	}
	void mer(int p,int q){
		uni[find(p)]=find(q);
	}
	bool same(int p,int q){
		return find(p)==find(q);
	}
};

	
int kruskal(int n,vector<mmp>& es){
	unifo u;
	u.init(n);
	sort(es.begin(),es.end());
	int res=0;
	rep(i,es.size()){
		mmp pa=es[i];
		int a=pa.sec.fir,
			b=pa.sec.sec,
			c=pa.fir;
		if(!u.same(a,b)){
			res+=c;
			u.mer(a,b);
		}
	}
	return res;
}

	
int n,m;

//vector<mp> vs[105];


vector<mmp> es;


int main(void){
	int n,m;
	scanf("%d%d",&n,&m);
	
	rep(i,m){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		//vs[a].push_back(mp(b,c));
		//vs[b].push_back(mp(a,c));
		es.push_back(mmp(c,mp(a,b)));
	}
	printf("%d\n",kruskal(n,es));
	return 0;
}
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

	
	
	
int n,m;

//vector<mp> vs[105];





int main(void){
	int n,m;
	scanf("%d%d",&n,&m);
	/*
	rep(i,m){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		vs[a].push_back(mp(b,c));
		//vs[b].push_back(mp(a,c));
	}*/
	unifo u;
	u.init(n);
	rep(i,m){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(a==0)u.mer(b,c);
		else{
			if(u.same(b,c))printf("1\n");
			else printf("0\n");
		}
	}
	return 0;
}
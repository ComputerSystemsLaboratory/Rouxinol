#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<set>
#include<numeric>
#include<map>
#include<iostream>
using namespace std;
#define rep(i,n) for(int i = 0;i<((int)(n));i++)
#define reg(i,a,b) for(int i = ((int)(a));i<=((int)(b));i++)
#define irep(i,n) for(int i = ((int)(n)-1);i>=0;i--)
#define ireg(i,a,b) for(int i = ((int)(b));i>=((int)(a));i--)
typedef long long ll;
typedef pair<ll, ll> mp;

//Union-Find??¨

int par[100000];//?±????????????£???
vector<vector<int> >v(100000);

int find(int x){
	if(par[x]==x)return x;
	return par[x]=find(par[x]);//????????§????????§???
}

bool same(int x,int y){
	return find(x)==find(y);
}

void unify(int x,int y){
	x=find(x);
	y=find(y);
	if(x==y)return;
	par[x]=y;
}

int main(void){
	int n,m,f1,f2,q,s[10000],t[10000];
	cin>>n>>m;
	rep(i,n)par[i]=i;//union-find??¨????????????
	rep(i,m){
		cin>>f1>>f2;
		unify(f1,f2);
	}
	cin>>q;
	rep(i,q)cin>>s[i]>>t[i];//query
	rep(i,q)if(same(s[i],t[i])){
		cout<<"yes"<<endl;
	}else{
		cout<<"no"<<endl;
	}
	return 0;
}
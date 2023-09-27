#include <bits/stdc++.h>
using namespace std;
typedef pair<int,pair<int,int> >Piii;

int par[111111];
int rnk[111111];
int n,m;

int root(int a){
	return par[a]!=a?root(par[a]):a;
}

void unite(int a,int b){
	if(rnk[a]>rnk[b]) swap(a,b);
	par[root(a)] =  root(b);
	rnk[root(b)] += rnk[root(a)];
}

Piii v[100000];

int main(){
	for(int i=0;i<111111;i++)par[i]=i;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		v[i]=make_pair(c,make_pair(a,b));
	}
	sort(v,v+m);

	int sum=0;

	for(int i=0;i<m;i++){
		int A=v[i].second.first;
		int B=v[i].second.second;
		if(root(A)==root(B)) continue;
		sum += v[i].first;
		unite(A,B);
	}

	cout<<sum<<endl;
}

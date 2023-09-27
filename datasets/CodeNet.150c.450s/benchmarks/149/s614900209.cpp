#include  <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;

const int nmax=10010;

int N,Q;

int par[nmax];
void init(){rep(i,nmax) par[i]=i;}
int find(int x){return (par[x]==x)?x:par[x]=find(par[x]);}
void unite(int a,int b){a=find(a),b=find(b);par[a]=b;}
bool same(int a,int b){return find(a)==find(b);}

int main(void){
	cin >> N >> Q;
	init();
	rep(i,Q){
		int t,a,b;
		cin >> t >> a >> b;
		if(t)
			cout << same(a,b) << endl;
		else
			unite(a,b);
	}
	return 0;
}
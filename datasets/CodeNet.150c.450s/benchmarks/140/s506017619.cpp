#include  <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;

const int vmax=10010;
const int inf=1023456789;

int N,M;
typedef tuple<int,int,int> node;
vector<node> graph;

int par[vmax];
void init(){rep(i,vmax) par[i]=i;}
int find(int x){return (par[x]==x)?x:par[x]=find(par[x]);}
void unite(int a,int b){a=find(a),b=find(b);par[a]=b;}
bool same(int a,int b){return find(a)==find(b);}

int kruskal(){
	init();
	sort(begin(graph),end(graph));
	int res=0;
	for(auto &e:graph){
		int a,b,c;
		tie(c,a,b)=e;
		if(!same(a,b)) unite(a,b),res+=c;
	}
	return res;
}

int main(void){
	cin >> N >> M;
	rep(i,M){
		int a,b,c;
		cin >> a >> b >> c;
		graph.push_back(node(c,a,b));
	}
	cout << kruskal() << endl;
	return 0;
}
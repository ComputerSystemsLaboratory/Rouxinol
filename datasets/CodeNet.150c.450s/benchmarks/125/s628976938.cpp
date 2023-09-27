#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(i=a;i>=b;i--)
#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
const int inf=1000000001;
const ll INF=1e16;
#define MOD 1000000007
#define mod 1000000009
#define pi 3.14159265358979323846
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;
static const int N=101;

int n,tt=0;
vii M(N,vi(N,0));
vi color(N,WHITE),d(N),f(N),nt(N,0);

void dfs();
void dfs_visit(int);
int next(int);

int main(){
	int i,j,u,k,v;
	cin>>n;
	loop(i,0,n){
		cin>>u>>k;
		loop(j,0,k){
			cin>>v;
			M[u][v]=1;
		}
	}
	dfs();
}

void dfs(){
	int i;
	loop(i,1,n+1){
		if(color[i]==WHITE){
			dfs_visit(i);
		}
	}
	loop(i,1,n+1){
		cout<<i<<" "<<d[i]<<" "<<f[i]<<endl;
	}
}

void dfs_visit(int r){
	stack<int> s;
	s.push(r);
	color[r]=GRAY;
	d[r]=++tt;
	
	while(!s.empty()){
		int u=s.top();
		int v=next(u);
		if(v!=-1){
			if(color[v]==WHITE){
				color[v]=GRAY;
				d[v]=++tt;
				s.push(v);
			}
		}else{
			s.pop();
			color[u]=BLACK;
			f[u]=++tt;
		}
	}
}

int next(int u){
	int v;
	loop(v,nt[u]+1,n+1){
		nt[u]=v;
		if(M[u][v]){
			return v;
		}
	}
	return -1;
}
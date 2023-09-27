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

int n;
vi d(N,-1),color(N,WHITE);
vii M(N,vi(N,0));

void bfs();
void bfs_visit(int);

int main(){
	int i,j;
	cin>>n;
	int u,k,v;
	loop(i,0,n){
		cin>>u>>k;
		loop(j,0,k){
			cin>>v;
			M[u][v]=1;
		}
	}
	
	bfs();
}

void bfs(){
	int u;
	bfs_visit(1);
	loop(u,1,n+1){
		cout<<u<<" "<<d[u]<<endl;
	}
}

void bfs_visit(int r){
	queue<int> q;
	int v;
	q.push(r);
	d[r]=0;
	while(!q.empty()){
		int u=q.front();
		loop(v,1,n+1){
			if(M[u][v] && color[v]==WHITE){
				q.push(v);
				color[v]=GRAY;
				d[v]=d[u]+1;
			}
		}
		color[u]=BLACK;
		q.pop();
	}
}
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
static const int N=100;

int n;
vii m(N,vi(N));
vi d(N,inf);

void dijkstra();

int main(){
	int i,j;
	cin>>n;
	int u,k,v,c;
	loop(i,0,n){
		loop(j,0,n){
			m[i][j]=inf;
		}
	}
	loop(i,0,n){
		cin>>u>>k;
		loop(j,0,k){
			cin>>v>>c;
			m[u][v]=c;
		}
	}
	dijkstra();
	loop(i,0,n){
		cout<<i<<" "<<d[i]<<endl;
	}
}

void dijkstra(){
	int i;
	d[0]=0;
	vi color(n,WHITE);
	color[0]=BLACK;
	int u=0;
	while(1){
		int minv=inf,v=-1;
		loop(i,0,n){
			if(color[i]!=BLACK){
				d[i]=min(d[i],d[u]+m[u][i]);
				if(minv>d[i]){
					minv=d[i];
					v=i;
				}
			}
		}
		if(v==-1){
			break;
		}
		color[v]=BLACK;
		u=v;
	}
	
}
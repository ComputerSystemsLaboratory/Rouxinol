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
vii a(N,vi(N));

int prim();

int main(){
	int i,j;
	cin>>n;
	loop(i,0,n){
		loop(j,0,n){
			int k;
			cin>>k;
			a[i][j]=(k==-1)? inf:k;
		}
	}
	int m=prim();
	cout<<m<<endl;
}

int prim(){
	int u,minv,i;
	vi d(n,inf);
	vi p(n,-1);
	vi color(n,WHITE);
	d[0]=0;
	while(1){
		minv=inf;
		u=-1;
		loop(i,0,n){
			if(minv > d[i] && color[i]!=BLACK){
				u=i;
				minv=d[i];
			}
		}
		if(u==-1){
			break;
		}
		color[u]=BLACK;
		int v;
		loop(v,0,n){
			if(color[v]!=BLACK && a[u][v]!=inf){
				if(d[v]>a[u][v]){
					d[v]=a[u][v];
					p[v]=u;
					color[v]=GRAY;
				}
			}
		}
	}
	int sum=0;
	loop(i,0,n){
		if(p[i]!=-1){
			sum+=a[i][p[i]];
		}
	}
	return sum;
}
#include <bits/stdc++.h>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,n1,n2) for(int i=n1;i<n2;i++)
#define speed_up    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long int ll;
typedef pair<ll,ll> Pi;
const int INF=(ll)(1LL<<31)-1;
const ll INFl=(ll)9223372036854775807;
const int MAX=10000;
const ll MOD=(ll)1e9+7;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a, b)*b;}
//int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

int m,nmin,nmax;
int p[210];

int main(){
	while(1){
		cin>>m>>nmin>>nmax;
		if(m==0&&nmin==0&&nmax==0)break;
		for(int i=0;i<m;i++){
			cin>>p[i];
		}
		int gapmax=0;
		int gap=-1;
		for(int i=nmin;i<=nmax;i++){
			if(p[i-1]-p[i]>=gapmax){
				gapmax=p[i-1]-p[i];
				gap=i;
			}
		}
		cout<<gap<<endl;
	}
	return 0;
}

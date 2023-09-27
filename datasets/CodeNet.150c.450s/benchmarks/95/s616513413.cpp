#include <bits/stdc++.h>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,n1,n2) for(int i=n1;i<n2;i++)
#define bFOR(i,n1,n2) for(int i=n1;i>=n2;i--)
#define speed_up    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long int ll;
typedef pair<int,int> Pi;
const int INF=(ll)(1LL<<30)-1;
const double INFd=100000000000.0;
const ll INFl=(ll)9223372036854775807;
const int MAX=10000;
const ll MOD=(ll)1e9+7;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a, b)*b;}
int dx[4]={0,1,0,-1},dy[4]={-1,0,1,0};

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

int n;
int f[110];



int main(){
	while(1){
		int l=0,r=0;
		int la=0;
		cin>>n;
		if(n==0)break;
		int ans=0;
		REP(i,n){
			string s;
			cin>>s;
			if(s=="lu"){
				l=1;
			}else if(s=="ru"){
				r=1;
			}else if(s=="ld"){
				l=0;
			}else{
				r=0;
			}
			if(la==0&&l==1&&r==1){
				ans++;
				la=1;
			}
			if(la==1&&l==0&&r==0){
				ans++;
				la=0;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

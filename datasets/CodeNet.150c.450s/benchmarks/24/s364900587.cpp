#include <bits/stdc++.h>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,n1,n2) for(int i=n1;i<n2;i++)
#define bFOR(i,n1,n2) for(int i=n1;i>=n2;i--)
#define speed_up    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long int ll;
typedef pair<ll,ll> Pi;
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

int n,m;
pair<int,int> dp[10100];

bool comp(pair<int,int>& a,pair<int,int>& b){
	return a.first>b.first;
}

int main(){
	while(1){
		cin>>n>>m;
		if(n==0&&m==0)break;
		int ans=0;
		REP(i,n){
			int t,s;
			cin>>t>>s;
			dp[i]=make_pair(s,t);
			ans+=s*t;
		}
		sort(dp,dp+n,comp);
		for(int i=0;i<n;i++){
			if(m>dp[i].second){
				m-=dp[i].second;
				ans-=dp[i].first*dp[i].second;
			}else{
				ans-=m*dp[i].first;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

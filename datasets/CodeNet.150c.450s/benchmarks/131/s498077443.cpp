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

int next_a(int aa,int ll){
	int t[ll];
	for(int i=0;i<ll;i++){
		t[i]=aa%10;
		aa/=10;
	}
	sort(t,t+ll);
	int ansmax=0;
	int k=1;
	for(int i=0;i<ll;i++){
		ansmax+=(k*t[i]);
		k*=10;
	}
	sort(t,t+ll,greater<int>());
	int ansmin=0;
	k=1;
	for(int i=0;i<ll;i++){
		ansmin+=(k*t[i]);
		k*=10;
	}
	return ansmax-ansmin;
}

vector<int> ans;
int a,L;
int main(){
	while(1){
		ans.clear();
		scanf("%d%d",&a,&L);
		if(a==0&&L==0)break;
		ans.push_back(a);
		int t=a;
		for(int i=0;i<21;i++){
			t=next_a(t,L);
			ans.push_back(t);
		}
		
		for(int i=1;i<=20;i++){
			for(int j=0;j<i;j++){
				if(ans[i]==ans[j]){
					printf("%d %d %d\n",j,ans[i],i-j);
					goto A;
				}
			}
		}
		A:;
	}
	return 0;
}

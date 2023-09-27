#include "bits/stdc++.h"
using namespace std;
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ALL(s) s.begin(),s.end()
#define P pair<ll,ll>
#define vl vector<ll>
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vvl vector<vector<ll>>
#define print(n) cout<<n<<endl
const int M=100010;
const int MOD=1000000007;
const int inf=1000000007;
const long long INF=1000000000000000007;
using ll=long long;
//int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};



int main(){
	int n;
	const int MAX=10010;
	while(1){
		int ans_1[MAX],ans_2[MAX],cnt=0,ans=0;
		cin>>n;
		if(n==0)break;
		string s;
		rep(i,0,n){
			cin>>s;
			ans_1[i]=(int)((s[0]-'0')*10+s[1]-'0')*3600+(int)((s[3]-'0')*10+s[4]-'0')*60+(int)((s[6]-'0')*10+s[7]-'0');
			cin>>s;
			ans_2[i]=(int)((s[0]-'0')*10+s[1]-'0')*3600+(int)((s[3]-'0')*10+s[4]-'0')*60+(int)((s[6]-'0')*10+s[7]-'0');
		}
		int a[90000]={};
		rep(i,0,n)a[ans_1[i]]++,a[ans_2[i]]--;
		rep(i,0,90000)if(a[i]!=0)cnt+=a[i],ans=max(ans,cnt);
		print(ans);
	}
	return 0;
}

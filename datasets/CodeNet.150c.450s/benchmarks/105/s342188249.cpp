#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
typedef pair<int,int>P;

//~ const int MOD=998244353;
const int MOD=1000000007;
const int INF=0x3f3f3f3f;
const ll INFL=0x3f3f3f3f3f3f3f3f;


void convert(vector<ll>&A){
	int idx=0;
	for(int i=60;i>=0;i--){
		bool flag=false;
		for(int j=idx;j<A.size();j++){
			if(A[j]>>i&1){
				flag=true;
				swap(A[idx],A[j]);
				break;
			}
		}
		for(int j=idx+1;j<A.size();j++){
			if(A[j]>>i&1){
				A[j]^=A[idx];
			}
		}
		if(flag)idx++;
	}	
}

bool can_make(vector<ll>A,ll x){
	convert(A);
	int j=0;
	for(int i=60;i>=0;i--){
		if(x>>i&1){
			for(;j<A.size();j++){
				if(A[j]>=(1LL<<(i+1)))continue;
				if(A[j]>>i&1){
					x^=A[j];
					j++;
					break;
				}
			}
			if(x>>i&1)return false;
		}
	}
	return true;
}

int n;
ll a[3000];
string s;

int main(){
	int T;cin>>T;
	rep(Case,T){
		scanf("%d",&n);
		rep(i,n)scanf("%lld",&a[i]);
		cin>>s;
		vector<ll>v;
		for(int i=n-1;i>=0;i--){
			if(s[i]=='0')v.push_back(a[i]);
			else{
				if(!can_make(v,a[i])){
					puts("1");goto g;
				}
			}
		}
		puts("0");
		g:;
	}
}
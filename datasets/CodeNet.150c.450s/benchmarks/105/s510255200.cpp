/*
AuThOr Gwj
*/
#include<bits/stdc++.h>
#define rb(a,b,c) for(int a=b;a<=c;++a)
#define rl(a,b,c) for(int a=b;a>=c;--a)
#define LL long long
#define IT iterator
#define PB push_back
#define II(a,b) make_pair(a,b)
#define FIR first
#define SEC second
#define FREO freopen("check.out","w",stdout)
#define rep(a,b) for(int a=0;a<b;++a)
#define KEEP while(1)
#define SRAND mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define random(a) rng()%a
#define ALL(a) a.begin(),a.end()
#define POB pop_back
#define ff fflush(stdout)
#define fastio ios::sync_with_stdio(false)
#define debug_pair(A) cerr<<A.FIR<<" "<<A.SEC<<endl;
using namespace std;
const int INF=0x3f3f3f3f;
typedef pair<int,int> mp;
typedef pair<mp,mp> superpair;
const int d=64;
LL store[d];
//from 0
LL a[202];
string s;

void sv(){
	int N;
	cin>>N;
	rb(i,1,N) cin>>a[i];
	cin >>s;
	reverse(ALL(s));
	reverse(a+1,a+1+N);
	s='%'+s;
	memset(store,0,sizeof(store));
	rb(i,1,N){
		LL inser=a[i];
		rep(j,d){
			if(store[j]&&((inser>>(j))&1)){
				inser ^=store[j];
			}
		}
		if(s[i]-'0'){
			if(inser){
				cout<<1<<endl;
				return;
			}	
		}
		else{
			if(inser){
				rep(j,d){
					if(1&(inser>>j)){
						store[j]=inser;
						break;
					}
				}
			}
		}
	}
	cout<<0<<endl;
}
int main(){
	fastio;
	int T;
	cin>>T;
	while(T--) sv();
	return 0;
}

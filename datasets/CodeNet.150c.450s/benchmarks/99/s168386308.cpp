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

int n;
string s1,s2;

int mn(string s){
	int ans=0;
	for(int i=0;i<s.size();){
		if(s[i]-'0'<=9&&2<=s[i]-'0'){
			if(s[i+1]=='m'){
				ans+=1000*(s[i]-'0');
			}else if(s[i+1]=='c'){
				ans+=100*(s[i]-'0');
			}else if(s[i+1]=='x'){
				ans+=10*(s[i]-'0');
			}else if(s[i+1]=='i'){
				ans+=(s[i]-'0');
			}
			i+=2;
		}else{
			if(s[i]=='m'){
				ans+=1000;
			}else if(s[i]=='c'){
				ans+=100;
			}else if(s[i]=='x'){
				ans+=10;
			}else if(s[i]=='i'){
				ans+=1;
			}
			i++;
		}
	}
	return ans;
}

string nm(int a){
	string ans;
	int co=0;
	while(a>0){
		int t=a%10;
		co++;
		a/=10;
		if(t==0){
		}else if(t==1){
			if(co==1){
				ans="i"+ans;
			}else if(co==2){
				ans="x"+ans;
			}else if(co==3){
				ans="c"+ans;
			}else if(co==4){
				ans="m"+ans;
			}
		}else{
			if(co==1){
				ans=to_string(t)+"i"+ans;
			}else if(co==2){
				ans=to_string(t)+"x"+ans;
			}else if(co==3){
				ans=to_string(t)+"c"+ans;
			}else if(co==4){
				ans=to_string(t)+"m"+ans;
			}
		}
	}
	return ans;
}
	

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s1>>s2;
		cout<<nm(mn(s1)+mn(s2))<<endl;
	}
	return 0;
}

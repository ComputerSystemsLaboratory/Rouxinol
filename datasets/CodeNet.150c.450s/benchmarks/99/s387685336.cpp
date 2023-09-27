#include <bits/stdc++.h>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int,int> P;
typedef pair<double,double> pdd;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef vector<pll> vpll;
typedef pair<ll,pll> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const ll INF=1ll<<60;
const double pi=acos(-1);
const double eps=1e-11;
const ll mod=1e9+7;
const int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};
const int DX[8]={-1,0,1,0,-1,-1,1,1},DY[8]={0,-1,0,1,-1,1,-1,1};

const int NPrime=3000000;
bool prime[NPrime+1];
vi EnumeratePrime(){
	fill(prime+2,prime+NPrime+1,true);
	vi a;
	for(int i=2;i<=NPrime;i++) if(prime[i]){
		a.emplace_back(i);
		for(int j=2*i;j<=NPrime;j+=i) prime[j]=0;
	}
	return a;
}

int f(string s){
	reverse(s.begin(),s.end());
	int n=s.size(),res=0;
	for(int i=0;i<n;i++){
		if(isalpha(s[i])){
			int t=1;
			if(s[i]=='x') t=10;
			if(s[i]=='c') t=100;
			if(s[i]=='m') t=1000;
			if(i+1<n&&isdigit(s[i+1])){
				t*=s[i+1]-'0';
			}
			res+=t;
		}
	}
	return  res;
}

string g(int n){
	string s,t="ixcm";
	int I=0;
	while(n){
		if(n%10!=0){
			s+=t[I];
			if(n%10>1) s+=(char)('0'+n%10);
		}
		I++;
		n/=10;
	}
	reverse(s.begin(),s.end());
	return s;
}

int n;
string s,t;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s>>t;
		cout<<g(f(s)+f(t))<<endl;
	}
}

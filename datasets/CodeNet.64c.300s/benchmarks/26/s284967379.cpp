#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e8;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
const ll MOD=1000000007;
ll powmod(ll a,ll b){
	if(b==1)return a;
	ll out=powmod(a,b/2);
	out=out*out%MOD;
	if(b%2)out=out*a%MOD;
	return out;
}
int main(){
	ll a,b;
	cin>>a>>b;
	cout<<powmod(a,b)<<endl;
}
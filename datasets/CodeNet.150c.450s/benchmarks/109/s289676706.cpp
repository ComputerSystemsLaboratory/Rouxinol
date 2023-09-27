#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(int)(n); i<i##_len; i++)
#define reps(i,n) for(int i=1 , i##_len=(int)(n);i<=i##_len;i++)
#define rrep(i,n) for(int i=((int)(n)-1);i>=0;i--)
#define rreps(i,n) for(int i=((int)(n));i>0;i--)
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define solve(a) ((a)?"Yes":"No")
typedef vector<long long> V;
typedef vector<V> VV;
typedef pair<long long , long long> P;
typedef vector<P> VP;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
const long long INFLL = 1LL<<62;
const int INF = 1<<30;
const double PI=acos(-1);
int trans(char s){
	return (s-'0');
}
int main(){
	int n;
	int ans=0;
	vector<pair<string,string>>data;
	vector<int>table;
	pair<int,int> hash;
	while(1){
	cin >>n;
	data.clear();
	table.clear();
	if(n==0){
		break;
	}
	ans=0;
	table.resize(86410);
	table.assign(86410,0);
	data.resize(n);
	rep(i,n){
		hash=mp(0,0);
		cin>>data[i].F>>data[i].S;//01:34:67
		hash.F+=trans(data[i].F[7]);
		hash.F += 10*trans(data[i].F[6]);
		hash.F += 60*trans(data[i].F[4]);
		hash.F += 600*trans(data[i].F[3]);
		hash.F += 3600*trans(data[i].F[1]);
		hash.F += 36000*trans(data[i].F[0]);

		hash.S += trans(data[i].S[7]);
		hash.S += 10 * trans(data[i].S[6]);
		hash.S += 60 * trans(data[i].S[4]);
		hash.S += 600 * trans(data[i].S[3]);
		hash.S += 3600 * trans(data[i].S[1]);
		hash.S += 36000 * trans(data[i].S[0]);
		table[hash.F]++;
		table[hash.S]--;
	}
	rep(i,86402){
		table[i+1]+=table[i];
		chmax(ans,table[i]);
	}

	cout<<ans<<endl;
	}
}

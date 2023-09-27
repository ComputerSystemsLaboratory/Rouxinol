#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fo(i,n) for(ll i=0;i<n;i++)
#define fok(i,k,n) for(ll i=k;i<n;i++)
#define ci(x) cin>>x
#define ci2(x,y) cin>>x>>y
#define co(x) cout<<x<<"\n"
#define co2(x,y) cout<<x<<" "<<y<<"\n"
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define PI 3.1415926535897932384626
#define deb1(x) cout<<#x<<" "<<x<<endl
#define deb2(x,y) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<"\n"
#define deb3(x,y,z) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<"\n"
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pll>		vpll;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
const int mod = 1000000007;	
int gcd(int a, int b){ if(a==0) return b; return gcd(b%a, a);}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
	//ci(t);
	while(t--){
		int n;
		ci(n);
		map<string,int> m;
		m["AC"]=0;
		m["WA"]=0;
		m["TLE"]=0;
		m["RE"]=0;
		fo(i,n){
			string tmp;
			ci(tmp);
			m[tmp]++;
		}
		cout<<"AC x "<<m["AC"]<<endl;
		cout<<"WA x "<<m["WA"]<<endl;
		cout<<"TLE x "<<m["TLE"]<<endl;
		cout<<"RE x "<<m["RE"]<<endl;
	}
	return 0;
}

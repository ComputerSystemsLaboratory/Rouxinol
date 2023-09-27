#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mk make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
int main(){
	int n;
	cin>>n;
	int a[4]={0};
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		if(s[0]=='A')
			a[0]++;
		else if(s[0]=='W')
			a[1]++;
		else if(s[0]=='T')
			a[2]++;
		else if(s[0]=='R')
			a[3]++;
	}
	cout<<"AC x "<<a[0]<<endl;
	cout<<"WA x "<<a[1]<<endl;
	cout<<"TLE x "<<a[2]<<endl;
	cout<<"RE x "<<a[3]<<endl; 
	return 0;
}

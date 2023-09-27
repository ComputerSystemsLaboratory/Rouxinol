//Author: Fuadul Hasan(fuadul202@gmail.com)
//BSMRSTU,Gopalganj
#include<bits/stdc++.h>
using namespace std;int tc = 1;
#define happy ios::sync_with_stdio(false);
#define coding  cin.tie(0);
#define F first
#define S second
#define mp make_pair
#define ll long long
#define Pi atan(1)*4
#define pb  push_back
#define vpr vector<pr> 
#define pr pair<int, int> 
#define vi std::vector<int>
#define vll std::vector<ll>
#define YES printf("YES\n");
#define NO printf("NO\n");
#define Yes printf("Yes\n");
#define No printf("No\n");
#define all(n) n.begin(),n.end()
#define point(x) setprecision(x)
#define Test printf("Case %d: ",tc++);
#define Unique(c) (c).resize(unique(all(c))-(c).begin())
#define vout(v) for (auto z: v) cout << z << " "; cout << endl;

#define error(args...) {vector<string>_v=split(#args,',');err(_v.begin(),args);cout<<endl;}
vector<string> split(const string &s, char c) {vector<string>v; stringstream ss(s); string x;
while (getline(ss, x, c))v.emplace_back(x); return move(v);} void err(vector<string>::iterator it) {}
template<typename T, typename... Args>void err(vector<string>::iterator it, T a, Args...args) {
cout << it->substr((*it)[0] == ' ', it->length()) << " = " << a << " "; err(++it, args...);}

const int M = 1e9 + 7;
const int K = 62;
const int N   = 2e3 + 5;

ll b[K];
char s[N];
ll a[N];
int n;

bool add(ll x){
	for(int i=0;i<K;i++){
		if(((x>>i)&1)==0) continue;
		if(b[i]==-1){
			b[i] = x;
			return true;
		}
		x ^= b[i];
	}
	return false;
}

int solve() 
{
	//happy coding

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lld", &a[i]);
	}
	scanf("%s", s);

	for(int i=0;i<K;i++){
		b[i] = -1;
	}

	for(int i=n-1;i>=0;i--){
		if(add(a[i])&&s[i] == '1'){
			printf("1\n");
			return 0;
		}
	}

	printf("0\n");
	return 0;
}
int main(){
	int test = 1;
  	scanf("%d", &test);
  	while (test--)solve();return 0;
}
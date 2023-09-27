#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <functional>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
 
using namespace std;
 
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define rep(i,n) REP(i, 0, n)
#define pb push_back
#define mp make_pair
#define all(r) (r).begin(),(r).end()
#define rall(r) (r).rbegin(),(r).rend()
#define fi first
#define se second
#define DBG(X) cout<<" "<<#X<<" : "<<X<<endl
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;

const int INF = 1e9;
const double EPS = 1e-8;
const int mod = 1e9 + 7;
const ll LINF = 1e18;

struct Input
{
	int n;char c;char str[1024];string s;ll l;
	int nextInt(){scanf("%d", &n);return n;}
	ll nextLong(){scanf("%lld", &l);return l;}
	char nextChar(){scanf("%c", &c);return c;}
	string next(){scanf("%s", str);return string(str);}
	string nextLine(){getline(cin, s);return s;}
};
Input in;

int main(){
	while(1){
		int m = in.nextInt(), n1 = in.nextInt(), n2 = in.nextInt();
		if(m == 0) break;
		vi v(m);
		rep(i, m) v[i] = in.nextInt();
		sort(rall(v));
		int ans = n1;
		for(int i = n1; i <= n2; i++){
			if(v[i-1]-v[i] >= v[ans-1] -v[ans]) ans = i;
		}
		cout<<ans<<endl;
	}
}
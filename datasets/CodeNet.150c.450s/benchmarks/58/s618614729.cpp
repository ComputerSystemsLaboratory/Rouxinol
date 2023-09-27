#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <functional>
#include <utility>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin, (x).end()
#define SORT(v,n) sort(v,v+n)
#define VSORT(v) sort(all(x))
#define inf 999999999
#define debug(x) cout<<#x<<":"<<x<<endl;
#define min(a,b) ((a)>(b)?(b):(a))
#define max(a,b) ((a)>(b)?(a):(b))
#define pi 2*acos(0.0)
#define in scanf
#define out printf
#define pb push_back
#define mp make_pair
#define F first
#define S second

// --
#define bit(n) (1LL<<(n)) // ???bit?????????
// --

using namespace std;

typedef long long llong;
typedef pair<int, int> pii;
typedef pair<llong, llong> pll;
typedef pair<llong, pll> plp;

const int MOD=1000000007;
const int dx[]={1,0,-1,0}, dy[]={0,-1,0,1};  // ????????????


int main(int argc, char**argv){
	stack<int> s;
	char c[20 + 2];
	int a, b;

	while (in("%s", c) != EOF){
		if (c[0] == '+' || c[0] == '-' || c[0] == '*'){
			a = s.top(); s.pop();
			b = s.top(); s.pop();
			if (c[0] == '+') s.push(b+a);
			else if (c[0] == '-') s.push(b-a);
			else s.push(b*a);
		}else{
			s.push(atoi(c));
		}
	}
	cout << s.top() << endl;

	return 0;
}
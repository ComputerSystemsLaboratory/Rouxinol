#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<complex>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define FOR(i, a, b) for(ll i = a; i < b; ++i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define INF (long long)1000000000
#define MOD 1000000007
#define EPS (long double) 1e-8
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, 1, 0, -1};

int main(void) {
	int t;
	cin>>t;
	REP(roop, t) {
		string s;
		string res = "";
		cin>>s;
		char buf = s[0];
		int cnt = 0;
		REP(i, s.size()) {
			if(s[i] == '0') {
				if(cnt == 0) {
					if(i + 1 < s.size()) buf = s[i + 1];
					continue;
				}
				int num = buf - '0';
				if(num == 1) {
					switch(cnt % 5) {
						case 1: {
							res += ".";
							break;
						}
						case 2: {
							res += ",";
							break;
						}
						case 3: {
							res += "!";
							break;
						}
						case 4: {
							res += "?";
							break;
						}
						case 0: {
							res += " ";
							break;
						}
					}
				} else if(num < 7) {
					res += (char)(('a' + (num - 2) * 3) + ((cnt - 1) % 3));
				} else if(num == 7){
					res += (char)('p' + ((cnt - 1) % 4));
				} else if(num == 8){
					res += (char)('t' + ((cnt - 1) % 3));
				} else {
					res += (char)('w' + ((cnt - 1) % 4));
				}
				if(i + 1 < s.size()) buf = s[i + 1];
				cnt = 0;
			} else {
				++cnt;
			}
		}
		cout<<res<<endl;
	}
}
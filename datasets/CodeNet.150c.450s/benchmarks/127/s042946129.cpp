#include <cctype>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define LL long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;
typedef pair<int, int> P;
typedef pair<LL, LL> LP;
typedef pair<int, P> PP;
typedef pair<LL, LP> LPP;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

int main(){
	int m;
	cin >> m;
	while(m--){
		string s;
		cin >> s;
		
		map<string, int> mp;
		REP(i, s.size() - 1){
			string left, right;
			REP(j, s.size()){
				if(j < i + 1) left.pb(s[j]);
				else right.pb(s[j]);
			}

			reverse(left.begin(), left.end());
			reverse(right.begin(), right.end());
			string Rleft = left;
			string Rright = right;
			reverse(left.begin(), left.end());
			reverse(right.begin(), right.end());

			mp[left + right] = 1;
			mp[left + Rright] = 1;
			mp[Rleft + right] = 1;
			mp[Rleft + Rright] = 1;
			mp[right + left] = 1;
			mp[right + Rleft] = 1;
			mp[Rright + left] = 1;
			mp[Rright + Rleft] = 1;
		}

		cout << mp.size() << endl;
	}

}
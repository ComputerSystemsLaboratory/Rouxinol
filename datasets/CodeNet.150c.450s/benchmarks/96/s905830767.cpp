#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>
#include <functional>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,sizeof(a))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = { -1, 0, 1, 0 }; const int dy[] = { 0, 1, 0, -1 };

int main() {
	vector<string> vvc;
	vvc.push_back(".,!? ");
	vvc.push_back("abc");
	vvc.push_back("def");
	vvc.push_back("ghi");
	vvc.push_back("jkl");
	vvc.push_back("mno");
	vvc.push_back("pqrs");
	vvc.push_back("tuv");
	vvc.push_back("wxyz");
	int n;
	cin >> n;
	while (n--){
		string s;
		string ans = "";
		cin >> s;
		int renzoku=0;
		char current='0';
		REP(i,s.length()){
			if (current!=s[i]){
				if (current != '0'){
					ans += vvc[current - '0' - 1][renzoku%vvc[current - '0' - 1].size()];
				}
				current = s[i];
				renzoku = 0;
			}
			else{
				renzoku++;
			}
		}
		cout << ans << endl;
	}

}
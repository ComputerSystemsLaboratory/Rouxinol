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
	int n;
	while (cin>>n,n){
		vector<int> dia(24 * 60 * 60, 0);
		REP(i,n){
			int start;
			int goal;
			string s;
			cin >> s;
			start=atoi(s.substr(0, 2).c_str()) * 60 * 60 + atoi(s.substr(3, 2).c_str()) * 60 + atoi(s.substr(6, 2).c_str());
			cin >> s;
			goal = atoi(s.substr(0, 2).c_str()) * 60 * 60 + atoi(s.substr(3, 2).c_str()) * 60 + atoi(s.substr(6, 2).c_str());
			for (int i = start; i < goal; i++){
				dia[i]++;
			}
		}
		int ans=0;
		REP(i, dia.size()){
			ans = max(ans, dia[i]);
		}
		cout << ans << endl;
	}
}
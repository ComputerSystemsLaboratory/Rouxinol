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
	int n, m;
	while (cin >> n >> m, n | m){
		int count = 0;
		vector<int>  vn;
		vector<int>  vm;
		vn.push_back(0);
		vm.push_back(0);
		map<int, int> ma;
		int x = 0;
		REP(i, n){
			int a;
			cin >> a;
			x += a;
			vn.push_back(x);
		}
		x = 0;
		REP(i, m){
			int a;
			cin >> a;
			x += a;
			vm.push_back(x);
		}

		REP(i, n + 1){
			REP(j, m + 1){
				ma[vn[i] - vm[j]]++;
			}
		}
		for (map<int, int>::iterator it = ma.begin(); it != ma.end(); it++){
			count += it->second*(it->second - 1) / 2;
		}


		cout << count << endl;

	}
}
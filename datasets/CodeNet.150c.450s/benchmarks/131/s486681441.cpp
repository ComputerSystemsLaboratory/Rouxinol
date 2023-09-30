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

const int dx[] = {-1,0,1,0}; const int dy[] = {0,1,0,-1};

int main() {
	int a, L;
	while(cin >> a >> L, a|L){
		map<int, int> hash;
		int turn = 0;

		hash.insert({a, turn++});
		while(1){
			vi aa;
			while(a > 0){
				aa.push_back(a % 10);
				a /= 10;
			}

			while(aa.size() < L)
				aa.push_back(0);

			RSORT(aa);

			int na = 0, nb = 0;
			for(auto n = aa.begin(); n!= aa.end(); n++){
				na *= 10;
				na += *n;
			}
			for(auto n = aa.rbegin(); n!= aa.rend(); n++){
				nb *= 10;
				nb += *n;
			}
			auto p = hash.insert({na-nb, turn});
//			LOG("na:%d nb:%d\n",na, nb);
//			LOG("tn:%d nn:%d\n",turn, na-nb);
			if(!p.second){
				printf("%d %d %d\n", p.first->second, na-nb, turn - p.first->second);
				break;
			}
			a = na-nb;
			turn ++;
		}
	}
}
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
	int n, L;
	while (cin >> n >> L, n | L){
		vector<int> vi;
		vector<int> vi2;
		vi2.push_back(n);
		int nc = n;
		int count = 0;
		while(nc!=0){
			vi.push_back(nc % 10);
			nc /= 10;
			count++;
		}
		REP(i, L - count)
			vi.push_back(0);
		count=0;
		
		int ansi=0,ans;
		while (1){
			SORT(vi);
			int maxn=0;
			REP(i, L)maxn+=vi[i] * (int)(pow(10,i));
			RSORT(vi);
			int minn=0;
			REP(i, L)minn+=vi[i] * (int)(pow(10, i));
			vector<int>::iterator it = find(vi2.begin(), vi2.end(), maxn - minn);
			if (it != vi2.end()){
				ansi = it-vi2.begin();
				ans = maxn - minn;
				break;
			}else{
				vi2.push_back(maxn - minn);
				vi.clear();
				int nc2 = maxn - minn;
				int count2 = 0;
				while (nc2 != 0){
					vi.push_back(nc2 % 10);
					nc2 /= 10;
					count2++;
				}
				REP(i, L - count2)
					vi.push_back(0);
			}
			count++;
		}
		cout << ansi << " " << ans << " " << count - ansi+1 << endl;
	}
}
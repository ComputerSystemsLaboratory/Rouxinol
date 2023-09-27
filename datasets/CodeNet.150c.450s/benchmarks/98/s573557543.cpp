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
	while (cin>>n>>m,n|m){
		vector<int> vi1;
		vector<int> vi2;
		int sum1 = 0;
		int sum2 = 0;
		int sum=0;
		REP(i, n+m){
			int x;
			cin >> x;
			if (i < n){
				vi1.push_back(x);
				sum1 += x;
			}
			else {
				vi2.push_back(x);
				sum2 += x;
			}
			sum += x;
		}
		int k, l;
		int ans = 0;
		for (int i = 0; i < vi1.size();i++){
			for (int j = 0; j < vi2.size(); j++){
				if ( vi1[i]*2 - vi2[j]*2-sum1 + sum2 ==0 ){
					k = i;
					l = j;
					ans = 1;
					break;
				}
				if (ans == 1)break;
			}
		}
		if(ans==1)printf("%d %d\n", vi1[k], vi2[l]);
		else printf("-1\n");
	}
}
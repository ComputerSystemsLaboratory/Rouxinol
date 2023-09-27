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
	int x;
	while(cin >> x, x){
		int ans = 0;
		for(int i = 1; i < x/2 + 1; ++i){
			int sum = 0;
			for(int j = i; sum < x; ++j){
				sum += j;
				if(sum == x){
					++ans;
					break;
				}
			}	
		}

		cout << ans << endl;
	}
}
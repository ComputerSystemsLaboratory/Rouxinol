#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <queue>
#include <stack>
#include <map>
#include <set>

#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define all(v) (v).begin(), (v).end()
#define rev(s) (s).rbegin(), (s).rend()
#define MP make_pair
#define X first
#define Y second

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main(){
	while(1){
		int n;
		cin >> n;
		if(!n)break;

		vector<pair<int, int> > v;

		rep(i, n){
			int h, m, s;
			scanf("%d:%d:%d", &h, &m, &s);
			v.push_back(MP(h*60*60+m*60+s, +1));
			scanf("%d:%d:%d", &h, &m, &s);
			v.push_back(MP(h*60*60+m*60+s, -1));
		}

		int need = 0;
		sort(all(v));

		int train = 0;
		rep(i, 2*n){
			train += v[i].second;
			need = max(need, train);
		}

		cout << need << endl;
	}

	return 0;
}
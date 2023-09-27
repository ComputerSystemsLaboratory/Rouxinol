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
#define rev(s) string((s).rbegin(), (s).rend())
#define MP make_pair
#define X first
#define Y second

using namespace std;

typedef long long int ll;
typedef pair<int, int> P;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

const int INF = 1000;

void pp(int (*v)[10]){
	rep(i, 10){
		rep(j, 10){
			printf("%5d", v[i][j]);
		}
		cout << endl;
	}
	cout << endl;
}

int sum_v(int *v){
	int sum = 0;
	rep(i, 10){
		if(v[i] == 1000) break;
		sum += v[i];
	}

	return sum;
}

int main(){

	while(1){
		int n;
		cin >> n;
		if(!n) break;

		int v[10][10];
		rep(i, 10){
			rep(j, 10){
				v[i][j] = INF;
				if(i == j)v[i][j] = 0;
			}
		}

		rep(i, n){
			int a, b, c;
			cin >> a >> b >> c;
			v[a][b] = v[b][a] = c;
		}

		//pp(v);

		rep(i, 10){
			rep(j, 10){
				rep(k, 10){
					v[j][k] = min(v[j][k], v[j][i] + v[i][k]);
				}
			}
		}

		int idx = 0;
		int sum = sum_v(v[0]);
		rep(i, 10){
			if(sum_v(v[i]) == 0)continue;
			if( sum_v(v[i]) < sum){
				idx = i;
				sum = sum_v(v[i]);
			}
		}

		//pp(v);

		cout << idx << ' ' << sum << endl;
	}

	

	return 0;
}
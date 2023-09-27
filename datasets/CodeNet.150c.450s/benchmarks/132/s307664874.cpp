#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<climits>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<bitset>
#include<iomanip>
using namespace std;

#define rep(i,j,n) for(int i=(j);i<(n);i++)
#define rep2(i,j,n) for(int i=(j);i<=(n);i++)
#define all(i) i.begin(),i.end()

typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef vector<vector<string>> vvs;
typedef pair<int, int> pi;
typedef long long i64;

int main() {
	int n, p;
	while (cin >> n >> p, n) {
		int x = p;
		vi a(n, 0);
		rep(i, 0, 1000000) {
			if (x == 0) {
				x += a[i%n];
				a[i%n] = 0;
			}
			else {
				a[i%n]++;
				x--;
				if (x == 0 && a[i%n] == p) {
					cout << i % n << endl;
					break;
				}
			}
		}
	}
}


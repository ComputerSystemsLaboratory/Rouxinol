#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
 
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

void fin(){
	freopen("test.txt", "r", stdin);
}

int main(){
//	fin();
	while(1){
		int n, m, p;
		cin >> n >> m >> p;

		if(!n) break;
		vector<int> x(n);
		int sum = 0;
		rep(i, n){
			cin >> x[i];
			sum += x[i];
		}

		int res = 0;
		if(x[m-1]) res = sum*(100-p)/x[m-1];

		cout << res << endl;
	}

	return 0;
}
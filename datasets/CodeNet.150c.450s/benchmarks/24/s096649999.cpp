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
	//fin();
	while(1){
		int n, m;
		cin >> n >> m;
		if(!n) break;
		int pcnt[11] = {};
		rep(i, n){
			int d, p;
			cin >> d >> p;
			pcnt[p] += d;
		}

		for(int i = 10; i >= 1; i--){
			if(m >= pcnt[i]){
				m -= pcnt[i];
				pcnt[i] = 0;
			}else{
				pcnt[i] -= m;
				m = 0;
				break;
			}
		}

		int cnt = 0;
		rep(i, 11){
			cnt += pcnt[i]*i;
		}

		cout << cnt << endl;
	}

	return 0;
}
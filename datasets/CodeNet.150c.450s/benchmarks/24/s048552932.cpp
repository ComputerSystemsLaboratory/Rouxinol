#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <cmath>
#include <numeric>
#include <list>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <climits>
#include <memory.h>
#include <memory>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <map>
#define _USE_MATH_DEFINES
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<int, P> PP;
typedef vector<int> vec;
typedef vector<vec> mat;
const int INF = 1 << 30;
const double EPS = 1e-9;

P road[20000];

int main(){
	int n, m;
	while(cin >> n >> m && (n || m)){
		for(int i = 0; i < n; i++){
			cin >> road[i].second >> road[i].first;
		}
		sort(road, road + n);
		ll res = 0;
		for(int i = n-1; i >= 0; i--){
			P p = road[i];
			int d = road[i].second;
			int cost = road[i].first;
			if(d <= m){
				m -= d;
			}else{
				if(m == 0){
					res += d * cost;
				}else{
					res += (d - m) * cost;
					m = 0;
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}
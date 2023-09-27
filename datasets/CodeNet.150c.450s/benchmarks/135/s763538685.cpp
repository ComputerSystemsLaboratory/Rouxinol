#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
#include <map>
#include <cmath>
using namespace std;
typedef long long i64;
typedef long double ld;
typedef pair<i64,i64> P;
#define rep(i,s,e) for(int i = (s);i <= (e);i++)

int n;
int m;

int hmp[1500 * 1000 + 1];
int wmp[1500 * 1000 + 1];

int main(){
	while(cin >> n >> m,n){
		fill(hmp , hmp + 1 + 1500 * 1000,0);
		fill(wmp,wmp + 1 + 1500 * 1000,0);

		vector<int> h(n + 1,0),w(m + 1,0);

		for(int i = 1;i <= n;i++){
			cin >> h[i];
			h[i] += h[i - 1];
		}
		for(int i = 1;i <= m;i++){
			cin >> w[i];
			w[i] += w[i - 1];
		}

		for(int i = 0;i <= n;i++){
			for(int j = i + 1;j <= n;j++){
				int len = h[j] - h[i];
				hmp[len]++;
			}
		}
		for(int i = 0;i <= m;i++){
			for(int j = i + 1;j <= m;j++){
				int len = w[j] - w[i];
				wmp[len]++;
			}
		}

		i64 result = 0;

		for(int i = 1;i <= 1500 * 1000;i++){
			result += hmp[i] * wmp[i];
		}
		cout << result << endl;
	}
}


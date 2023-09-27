#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
typedef pair<int, int> P;
typedef unsigned int ui;
int main(){
	int count[1001] = {};
	int i, j,k;
	for (i = 2; i <= 1000; i++) {
		for (j = 1; j <= 1001 - i; j++) {
			int csum = 0;
			for (k = j; k <= j + i - 1; k++) {
				csum += k;
				if (csum > 1000)break;
			}
			if (csum <= 1000) {
				count[csum]++;
			}
		}
	}
	int n;
	while (cin >> n) {
		if (n == 0)break;
		cout << count[n] << endl;
	}
	return 0;
}

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
	int n,y,m,d;
	int i;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> y >> m >> d;
		int sum = 0;
		while (y < 1000) {
			if (y % 3 != 0 && m % 2 == 0) {
				sum += 20 - d;
				m++;
			}
			else {
				sum += 21 - d;
				m++;
			}
			d = 1;
			if (m > 10) {
				y++; m -= 10;
			}
		}
		cout << sum << endl;
	}
	return 0;
}

#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int solve(int n) {
	vector<bool> v;
	vector<int> prime;
	if (n == 0)return 0;
	else if (n == 1)return 0;
	else if (n == 2)return 1;
	else {
		v.push_back(false);//0
		v.push_back(false);//1
		for (int i = 2; i <= n; i++) {
			v.push_back(true);
		}
		for (int i = 2; i <= (int)pow(n, 0.5) + 1; i++) {
			if (v[i] == true) {
				for (int j = i * 2; j <= n; j += i) {
					v[j] = false;
				}
			}
		}
		//cout << "v.size()=" << v.size() << endl;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == true) {
				prime.push_back(i);
			}
		}
		return prime.size();
	}

}

int main()
{
	int n;
	while (cin >> n) {
		int ans = solve(n);
		cout << ans << endl;
	}

    return 0;
}
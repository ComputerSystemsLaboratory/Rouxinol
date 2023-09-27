#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

vector<int> v;
int a[20];
int m;
int n, q;

void dp(int cnt, int value)
{
	if (cnt >= n) {
		v.push_back(value);
		return;
	}
	dp(cnt + 1, value + a[cnt]);
	dp(cnt + 1, value);
}

int main(){
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	dp(0, 0);
	sort(v.begin(), v.end());
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> m;
		bool flag = false;
		for (int j = 0; j < v.size(); j++) {
			if (v[j] > m) {
				break;
			} else if (v[j] == m) {
				flag = true;
				break;
			}
		}
		if (flag) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
#include<string>
#include<queue>
#include<map>
#include<cstring>
#include<sstream>
#include<vector>
#include<algorithm>
#include<functional>
#include<set>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<time.h>
typedef long long ll;
using namespace std;


int main() {
	//freopen("run.in", "r", stdin);
	//freopen("run.out", "w", stdout);

	int n, q;
	cin >> n;
	int a[10050], b[505];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> b[i];
	}
	int cnt = 0;
	for (int i = 0; i < q; i++) {
		for (int j = 0; j < n; j++) {
			if (b[i] == a[j]) {
				cnt++;
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
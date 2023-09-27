#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <deque>
#define ll long long

using namespace std;

int N; 
vector<ll>BIT;
void add(int a, ll w) {
	for (int x = a; x <= N; x += x & -x) BIT[x] += w;
}
ll sum(int a) {
	ll ret = 0;
	for (int x = a; x > 0; x -= x & -x) ret += BIT[x];
	return ret;
}

vector<int>sortedA;


int main() {
	cin >> N;
	vector<int>a(N);
	BIT.assign(N + 1, 0);
	sortedA.assign(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
		sortedA[i] = a[i];
	}
	sort(sortedA.begin(), sortedA.end());
	ll cnt = 0;
	for (int i = 0; i < N; i++) {
		int tar = a[i];
		int left = 0, right = N;
		while (left + 1 < right) {
			int mid = (left + right) / 2;
			if (sortedA[mid] == tar) {
				left = mid; right = mid + 1;
			}
			else if (sortedA[mid] < tar)
				left = mid + 1;
			else right = mid;
		}
		cnt += i - sum(left + 1);
		add(left + 1, 1);
	}

	cout << cnt << endl;







	return 0;
}




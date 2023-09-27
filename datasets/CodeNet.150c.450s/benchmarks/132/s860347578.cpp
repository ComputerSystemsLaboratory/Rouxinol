#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <map>
#include <queue>
#include <numeric>
#include <climits>
#include <functional>
using namespace std;
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
//using ll = unsigned long long;
//const ll mod = 1000000007;
string al = "abcdefghijklmnopqrstuvwxyz";
//bool less_sec(const pair<int, int>&a, const pair<int, int>&b) {
//	return a.second > b.second;
//}
int n, p;
int arr[51];
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	while (cin >> n >> p, n&&p) {
		int table = p;
		for (int i = 0; i < n; ++i) {
			arr[i] = 0;
		}
		int flag = 0;
		while (true) {
			if (table == 0) {
				if (arr[flag] != 0) {
					table = arr[flag];
					arr[flag] = 0;
				}

			}
			else {
				arr[flag]++;
				table--;
			}
			if (arr[flag] == p) break;
			flag++;
            if(flag == n) flag = 0;
		}
		cout << flag << endl;
	}
	return 0;
}

#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int n;

	while (cin >> n&&n) {
		int s[100];
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = n - 1; j > i; j--) {
				if (s[j] > s[j - 1])swap(s[j], s[j - 1]);
			}
		}
		int sum = 0;
		for (int k = 1; k < n - 1; k++)sum += s[k];
		cout << sum / (n-2) << endl;
	}
	return 0;
}
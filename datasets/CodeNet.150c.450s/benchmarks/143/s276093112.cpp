#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<cmath>
#include<list>
#include<set>
#include<map>

using namespace std;
long long MOD = 1000000007LL;
const double PI = 3.14159265358979323846;
#undef INT_MIN
#undef INT_MAX
#define INT_MIN -2147483648
#define INT_MAX 2147483647
#define endl "\n"

int main() {
	int N;
	cin >> N;
	map<int, int> values;
	long long sum = 0;
	for (int i = 0; i < N; ++i) {
		int a;
		cin >> a;
		++values[a];
		sum += a;
	}

	int Q;
	cin >> Q;

	vector<long long> ans;
	for (int i = 0; i < Q; ++i) {
		int b, c;
		cin >> b >> c;
		long long diff = c - b;
		long long count = values[b];

		sum += diff * count;
		values[c] += count;
		values[b] = 0;

		ans.push_back(sum);
	}

	for (int i = 0; i < ans.size(); ++i) {
		cout << ans[i] << endl;
	}



	return 0;
}



#include "iostream"

using namespace std;

int main() {

	short in[2000000];
	short ans[2000000];
	int co[10001];
	int n;

	cin >> n;

	for (int i = 0; i <= 10000; i++) {
		co[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		cin >> in[i];
		co[in[i]]++;
	}

	co[0]--;
	for (int i = 1; i <= 10000; i++) {
		co[i] += co[i - 1];
	}
	for (int i = 0; i < n; i++) {
		ans[co[in[i]]] = in[i];
		co[in[i]]--;
	}

	for (int i = 0; i < n; i++) {
		cout << ans[i];
		if (i < n - 1) cout << " ";
	}

	cout << endl;

	return 0;
}
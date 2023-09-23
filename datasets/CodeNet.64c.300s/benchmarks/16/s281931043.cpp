#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX = 200000;

int main()
{
    int n, R[MAX];

    cin >> n;
	for (int i = 0; i < n; i++) cin >> R[i];

	int max_v = -1000000000;
	int min_v = R[0];

	for (int i = 1; i < n; i++) {
		max_v = max(max_v, R[i]-min_v);
		min_v = min(min_v, R[i]);
	}

	cout << max_v << endl;

    return 0;
}
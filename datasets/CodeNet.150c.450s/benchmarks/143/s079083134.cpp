#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long sum = 0;
	vector<long long> avc(100001, 0);
	for (long long i = 0; i < n; ++i) {
		long long a;
		cin >> a;
		++avc[a];
		sum += a;
	}

	long long q;
	cin >> q;
	for (long long i = 0; i < q; ++i)
	{
		long long b, c;
		cin >> b >> c;
		sum += c * avc[b] - b * avc[b];
		cout << sum << endl;
		avc[c] += avc[b];
		avc[b] = 0;
	}

	return 0;
}
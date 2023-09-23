#include <iostream>
using namespace std;
#define max(x, y) ((x) > (y) ? (x) : (y))
#define min(x, y) ((x) < (y) ? (x) : (y))

int main()
{
	int n, tmp, mi = 1000001, ma = -1000001;
	long long int total = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> tmp;
		ma = max(ma, tmp);
		mi = min(mi, tmp);
		total += tmp;
	}
	cout << mi << ' ' << ma << ' ' << total << endl;
}
#include <iostream>
#include <vector>

using namespace std;

vector<int> factorize(const int n) {
	vector<int> ps;

	int tmp = n;
	while (tmp % 2 == 0) {
		ps.push_back(2);
		tmp /= 2;
	}
	for (int i = 3; 2 * i <= n; i += 2) {
		while (tmp % i == 0) {
			ps.push_back(i);
			tmp /= i;
		}
	}
	if (ps.size() == 0) ps.push_back(n);

	return ps;
}

int main()
{
    int n;
    cin >> n;

    vector<int> ps = factorize(n);
    cout << n << ':';
    for (vector<int>::iterator it = ps.begin(); it != ps.end(); ++it) {
        cout << ' ' << *it;
    }
    cout << endl;

    return 0;
}
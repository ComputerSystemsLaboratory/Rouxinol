#include <iostream>
#include <vector>
 
using namespace std;
 
vector<int> factorize(int n) {
	vector<int> ps;

	while (n % 2 == 0) {
		ps.push_back(2);
		n /= 2;
	}
	for (int i = 3; i * i <= n; i += 2) {
		while (n % i == 0) {
			ps.push_back(i);
			n /= i;
		}
	}
	if (n != 1) ps.push_back(n);

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
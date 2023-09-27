#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, p, stone;
	while (cin >> n >> p, n || p) {
		vector<int> cit(n, 0);
		stone = p;
		for (int i = 0;; i++) {
			if (i == n)
				i = 0;
			if (stone) {
				stone--;
				cit[i]++;
				if (cit[i] == p) {
					cout << i << endl;
					break;
				}
			} else {
				stone = cit[i];
				cit[i] = 0;
			}
		}
	}
	return 0;
}
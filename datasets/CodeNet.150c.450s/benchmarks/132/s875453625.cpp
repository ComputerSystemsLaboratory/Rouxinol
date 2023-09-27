#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < int(n); i++)
#define vec vector

int main(void)
{
	while(1) {
		int n, p;
		cin >> n >> p;
		if (!n) break;
		int init_p = p;
		int winner = 0;
		vec<int> rock(n, 0);
		while(1) {
			if (p > 0) {
				p--;
				rock[winner]++;
			} else {
				p += rock[winner];
				rock[winner] = 0;
			}
			if (!p && rock[winner] == init_p) break;
			winner++;
			if (winner == n) winner = 0;
		}
		cout << winner << endl;
	}
	return 0;
}
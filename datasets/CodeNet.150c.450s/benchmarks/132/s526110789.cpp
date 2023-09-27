#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	while (true) {
		int n, p;

		cin >> n >> p;

		if (n == 0 && p == 0) {
			break;
		}

		int ans;
		int cup = p;
		vector<int> person(n, 0);
		int count = 0;

		while (true) {
			if (cup != 0) {
				person[count]++;
				cup--;

				if (cup == 0) {
					bool flag = true;
					for (int i = 0; i < n; i++) {
						if (i == count) {
							continue;
						}

						if (person[i] != 0) {
							flag = false;
							break;
						}
					}
					if (flag == true) {
						ans = count;
						break;
					}
				}
			}
			else {
				cup += person[count];
				person[count] = 0;
			}
			count = (count + 1) % n;
		}

		cout << ans << endl;
	}

	return 0;
}
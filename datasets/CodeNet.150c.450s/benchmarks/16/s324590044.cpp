#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	stack<int> S1;
	stack< pair<int, int> > S2;
	int *ans;
	char ch;
	int A = 0;

	int i = 0, j;
	while (cin >> ch) {
		if (ch == '_' || (ch == '/' && S1.empty() == true)) {
			++i;
			continue;
		}
		else if (ch == '\\') {
			S1.push(i);
			++i;
			continue;
		}
		else if (ch == '/') {
			j = S1.top();
			S1.pop();
			A += (i - j);
			if (S2.empty() == true) {
				S2.push(make_pair(j, i - j));
				++i;
				continue;
			}
			else {
				int k = S2.top().first;

				if (k < j) {
					S2.push(make_pair(j, i - j));
					++i;
					continue;
				}
				else if (j < k) {
					int tempArea = 0;
					while (j < k && S2.empty() != true) {
						tempArea += S2.top().second;
						S2.pop();
						if (S2.empty() != true) {
							k = S2.top().first;
						}
					}
					S2.push(make_pair(j, tempArea + (i - j)));
					++i;
					continue;
				}
			}
		}
		else {
			++i;
			continue;
		}
	}

	int size = S2.size();
	ans = new int[size];
	for (int i = 0; i < size; ++i) {
		ans[size - 1 - i] = S2.top().second;
		S2.pop();
	}


	cout << A << endl;
	cout << size;
	for (int i = 0; i < size; ++i) {
		cout << " " << ans[i];
	}
	cout << endl;

	return 0;
}
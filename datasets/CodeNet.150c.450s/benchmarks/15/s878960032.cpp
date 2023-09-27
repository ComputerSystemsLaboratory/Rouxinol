#include <iostream>
#include <string>
#include <vector>

int main() {

	int n;
	std::cin >> n;

	std::vector<int> S, T, A;

	S.resize(n, 0);
	for (int i = 0; i < n; i++)
		std::cin >> S[i];

	int q;
	std::cin >> q;

	T.resize(q, 0);
	for (int i = 0; i < q; i++)
		std::cin >> T[i];

	int cnt = 0;
	for (int i = 0; i < q; i++) {
		for (int j = 0; j < n; j++) {
			if (T[i] == S[j]) {
				cnt++;
				break;
			}
		}
	}

	std::cout << cnt << std::endl;


	return 0;
}
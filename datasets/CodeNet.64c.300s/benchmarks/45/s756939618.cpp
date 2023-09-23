#include <iostream>
using namespace std;

int main()
{
	int N, M, P, sum, tosen, temp;
	while (cin >> N >> M >> P, N || M || P) {
		sum = 0;
		for (int i = 1; i <= N; i++) {
			cin >> temp;
			if (i == M)
				sum += tosen = temp;
			else
				sum += temp;
		}
		if (tosen)
			cout << sum * (100 - P) / tosen << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}
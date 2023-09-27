#include <iostream>
using namespace std;

int main()
{
	int N;
	while (cin >> N) {
		int count = 0;
		for (int i = 0; i < 600 / N - 1; i++) {
			count += N * (N + i * N)*(N + i*N);
		}
		cout << count<<endl;
	}
	return 0;
}
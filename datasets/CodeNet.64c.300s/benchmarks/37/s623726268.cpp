#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int N;
	cin >> N;

	while (N != 0) {
		int count_find = 0;

		for (int i = 1; i < N; i++) {
			int sum = i;
			for (int j = i+1; sum < N; j++) {
				sum += j;
			}
			if (sum == N) {
				count_find++;
			}	
		}
		cout << count_find << endl;
		
		cin >> N;
	}

	return 0;
}
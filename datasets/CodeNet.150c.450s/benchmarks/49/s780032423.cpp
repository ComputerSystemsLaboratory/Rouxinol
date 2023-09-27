#include <iostream>

using namespace std;

int main(){
	int N;
	const int NMAX = 100;
	int score[NMAX];

	while (1) {
		cin >> N;
		if (N==0) break;
		
		int max, min;
		int sum = 0;
		for (int i=0; i<N; ++i) {
			cin >> score[i];
			sum += score[i];
			if (i == 0) {
				max = min = score[0];
			} else {
				if ( score[i] > max ) max = score[i];
				if ( score[i] < min ) min = score[i];
			}
		}
		cout << (sum-max-min)/(N-2) << endl;

	}

	return 0;
}
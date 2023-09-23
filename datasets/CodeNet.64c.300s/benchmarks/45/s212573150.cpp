#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int N,M,P;
	
	cin >> N;
	cin >> M;
	cin >> P;

	while (N != 0 || M != 0 || P != 0) {
		int vote;
		int vote_w;
		int sum_vote = 0; 
		int r;
		for (int i = 0; i < N; i++) {
			cin >> vote;
			sum_vote += vote;
			if (i+1 == M) {
				vote_w = vote;
			} 
		}
		if (vote_w > 0) {
			r = ((sum_vote*100) * (100-P));
			r = r/(100*vote_w);
		}else {
			r = 0;
		}
		cout << r << endl; 
		
		cin >> N;
		cin >> M;
		cin >> P;
	}
	return 0;
}
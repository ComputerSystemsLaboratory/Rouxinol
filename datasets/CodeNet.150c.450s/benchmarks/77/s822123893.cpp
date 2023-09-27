#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int N;
	int M;
	int px_R,py_R;
	int all_gem;
	int ope;
	std::string move;

	cin >> N;
	
	while (N != 0) {
		all_gem = 1;
		px_R = 10;
		py_R = 10;
		int *gem_x = new int[ N ];
		int *gem_y = new int[ N ];
		int *gem = new int[ N ];

		int px_G,py_G;
		for (int i = 0; i < N; i++) {
			cin >> gem_x[i];
			cin >> gem_y[i];
			gem[i] = 1;
		}

		cin >> M;
		for (int i = 0; i < M; i++) {
			cin >> move;
			cin >> ope;

			if (move == "N") {
				for (int j = 0; j < N; j++) {
					if (gem[j]) {
						if (gem_x[j] == px_R) {
							if (gem_y[j] >= py_R && gem_y[j] <= (py_R+ope)) {
								gem[j] = 0;
							}
						}
					}
				}
				py_R += ope;
			}
			if (move == "S") {
				for (int j = 0; j < N; j++) {
					if (gem[j]) {
						if (gem_x[j] == px_R) {
							if (gem_y[j] <= py_R && gem_y[j] >= (py_R-ope)) {
								gem[j] = 0;
							}
						}
					}
				}
				py_R -= ope;
			}
			if (move == "E") {
				for (int j = 0; j < N; j++) {
					if (gem[j]) {
						if (gem_y[j] == py_R) {
							if (gem_x[j] >= px_R && gem_x[j] <= (px_R+ope)) {
								gem[j] = 0;
							}
						}
					}
				}
				px_R += ope;
			}
			if (move == "W") {
				for (int j = 0; j < N; j++) {
					if (gem[j]) {
						if (gem_y[j] == py_R) {
							if (gem_x[j] <= px_R && gem_x[j] >= (px_R-ope)) {
								gem[j] = 0;
							}
						}
					}
				}
				px_R -= ope;
			}
		}
		for (int i = 0; i < N; i++) {
			if (gem[i] == 1){
				all_gem = 0;
				break;
			}
		}
		if (all_gem) {
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
		
		cin >> N;
		delete[] gem_x;
		delete[] gem_y;
		delete[] gem;
	}
	return 0;
}
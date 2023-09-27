#include <iostream>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int N,M;
	bool open = false;
	std::string T;
	getline(cin, T);
	N = atoi(T.c_str());
	std::string *u = new std::string[ N ];
	for (int i = 0; i < N; i++) {
		getline(cin, u[i]);
	}
	getline(cin, T);
	M = atoi(T.c_str());
	for (int i = 0; i < M; i++) {
		bool find = false;
		getline(cin, T);
		for (int j = 0; j < N && (!find); j++) {
			if (T == u[j]) {
				find = true;
			}
		}
		if (find) {
			if (!open) {
				cout << "Opened by " << T << endl;
				open = true;
			}else {
				cout << "Closed by " << T << endl;
				open = false;
			}
		}else {
			cout << "Unknown " << T << endl;
		}
	}
	delete[] u;
	return 0;
}
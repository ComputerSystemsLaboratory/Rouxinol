#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int n,build,floor,room,people;
	cin >> n;
	int A[4][3][10];
	
	for (int s = 0; s < 4; s++) {
		for (int r = 0; r < 3; r++) {
			for (int q = 0; q < 10; q++) {
				A[s][r][q] = 0;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cin >> build >> floor >> room >> people;
		A[build-1][floor-1][room-1] += people;
	}

	for (int s = 0; s < 4; s++) {
		if(s!=0)
			cout << "####################" << endl;
		for (int r = 0; r < 3; r++) {
			for (int q = 0; q < 10; q++) {
				cout << " " << A[s][r][q];
			}
			cout << endl;
		}
	}

	return 0;
}
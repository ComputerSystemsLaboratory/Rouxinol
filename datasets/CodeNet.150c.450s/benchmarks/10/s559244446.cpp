#include <iostream>
using namespace std;
#define HOUSE 4
#define FLOOR 3
#define ROOM 10
int main() {
	int n, room, floor, house, people;
	int ary[HOUSE][FLOOR][ROOM];
	for (int i = 0; i < HOUSE; i++) {
		for (int j = 0; j < FLOOR; j++) {
			for (int k = 0; k < ROOM; k++) {
				ary[i][j][k] = 0;
			}
		}
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> house >> floor >> room >> people;
		ary[house-1][floor-1][room-1] += people;
	}
	for (int i = 0; i < HOUSE; i++) {
		for (int j = 0; j < FLOOR; j++) {
			for (int k = 0; k < ROOM; k++) {
				cout << " " << ary[i][j][k];
			}
			cout << endl;
		}
		if(i < HOUSE-1)
		    cout << "####################" << endl;
	}
	return 0;
}
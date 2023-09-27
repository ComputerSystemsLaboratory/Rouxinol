#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int face[6];
	int q, upper, front;
	bool is_asc;

	cin >> face[0] >> face[1] >> face[2] >> face[3] >> face[4] >> face[5];

	int dice[][4] = {
		{face[1], face[2], face[4], face[3]},
		{face[2], face[0], face[3], face[5]},
		{face[0], face[1], face[5], face[4]}
	};

	cin >> q;

	for(int i = 0; i < q; i++){
		cin >> upper >> front;

		is_asc = false;
		if ((upper == face[0] || upper == face[5] || front == face[0] || front == face[5]) && (upper == face[1] || upper == face[4] || front == face[1] || front == face[4])){
			for(int j = 0; j < 4; j++){
				if (dice[2][j] == upper && dice[2][(j + 1) % 4] == front){
					is_asc = true;
					break;
				}
			}
			cout << (is_asc ? face[2] : face[3]) << endl;
		}
		else if ((upper == face[0] || upper == face[5] || front == face[0] || front == face[5]) && (upper == face[2] || upper == face[3] || front == face[2] || front == face[3])) {
			for(int j = 0; j < 4; j++){
				if (dice[1][j] == upper && dice[1][(j + 1) % 4] == front){
					is_asc = true;
					break;
				}
			}
			cout << (is_asc ? face[1] : face[4]) << endl;
		}
		else if ((upper == face[1] || upper == face[4] || front == face[1] || front == face[4]) && (upper == face[2] || upper == face[3] || front == face[2] || front == face[3])) {
			for(int j = 0; j < 4; j++){
				if (dice[0][j] == upper && dice[0][(j + 1) % 4] == front){
					is_asc = true;
					break;
				}
			}
			cout << (is_asc ? face[0] : face[5]) << endl;
		}
	}

	return 0;
}

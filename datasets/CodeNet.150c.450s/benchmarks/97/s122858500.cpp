#include <iostream>
#include <map>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int N;
	cin >> N;

	while (N!=0) {
		int max_w = 0;
		int max_h = 0;
		int min_w = 0;
		int min_h = 0;
		int n,d;
		std::map< int, std::vector<int> > coor;
		std::vector<int> temp(2);
		temp[0] = 0;
		temp[1] = 0;
		coor[0] = temp;
		for (int i = 1; i < N; i++) {
			cin >> n; 
			cin >> d; 
			if (d == 0) {
				temp[0] = coor[n][0] - 1;
				temp[1] = coor[n][1];
				if (temp[0] < min_w) {
					min_w = temp[0];
				}
				coor[i] = temp;
			}
			if (d == 1) {
				temp[0] = coor[n][0];
				temp[1] = coor[n][1] - 1;
				if (temp[1] < min_h) {
					min_h = temp[1];
				}
				coor[i] = temp;
			}
			if (d == 2) {
				temp[0] = coor[n][0] + 1;
				temp[1] = coor[n][1];
				if (temp[0] > max_w) {
					max_w = temp[0];
				}
				coor[i] = temp;
			}
			if (d == 3) {
				temp[0] = coor[n][0];
				temp[1] = coor[n][1] + 1;
				if (temp[1] > max_h) {
					max_h = temp[1];
				}
				coor[i] = temp;
			}
		}

		cout << max_w-min_w+1 << " " << max_h-min_h+1 << endl;
		cin >> N;
	}

	return 0;
}
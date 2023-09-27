#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

struct data_t {
	int height;
	int width;
	int dia;

	bool operator<( const data_t& right) const {
		if (dia == right.dia) {
			return (height < right.height);
		}
		else {
			return ((dia == right.dia) || (dia < right.dia));
		}
	}
};

int main(void) {
	int h,w;
	int ind = 0;
	cin >> h;
	cin >> w;
	int lim = ((149-1)*149)/2;
	std::vector<data_t> all(lim);

	for (int i = 1; i < 150; i++) {
		for (int j = i+1; j < 151; j++) {
			all[ind].height = i;
			all[ind].width = j;
			all[ind].dia = pow(i,2) + pow(j,2);
			ind++;
		}
	}

	std::sort(all.begin(), all.end());

	while (h!=0||w!=0) {
		int d = pow(h,2) + pow(w,2);
		bool find = false;
		bool pro = false;
		for (int i = 0; i < lim && !find; i++) {
			if (pro) {
				cout << all[i].height << " " << all[i].width << endl;
				find = true;
			}
			else {
				if (h == all[i].height && w == all[i].width) {
					pro = true;
				}
			}
		}
		cin >> h;
		cin >> w;
	}

	return 0;
}
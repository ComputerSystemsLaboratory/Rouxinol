#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int m,n_min,n_max;
	cin >> m;
	cin >> n_min;
	cin >> n_max;

	while (m!=0||n_min!=0||n_max!=0) {
		std::vector<int> p(m);
		int num_p = n_min;
		int gap_max;
		int gap;
		for (int i = 0; i < m; i++) {
			cin >> p[i];
		}
		gap_max = p[n_min-1] - p[n_min];	
		for (int i = n_min+1; i < n_max+1; i++) {
			gap = p[i-1] - p[i];	
			if (gap >= gap_max) {
				gap_max = gap;
				num_p = i;
			}
		}
		cout << num_p << endl;

		cin >> m;
		cin >> n_min;
		cin >> n_max;
	}
	return 0;
}
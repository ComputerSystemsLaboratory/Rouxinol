#include <iostream>
#include <limits>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> r(n);

	for(int i = 0; i < r.size(); ++i) cin >> r[i];

	// insertionSort
	[&] {
		for(int i = 0; i < r.size(); ++i) {
			int v = r[i];
			int j = i - 1;
			while(j >= 0 && r[j] > v) {
				r[j+1] = r[j];
				j--;
			}
			r[j+1] = v;

			// presentation
			for(int j = 0; j < r.size(); ++j) {
				cout << r[j];
				if(j == r.size()-1) cout << endl;
				else cout << " ";
			}
		}
	}();

	return 0;
}
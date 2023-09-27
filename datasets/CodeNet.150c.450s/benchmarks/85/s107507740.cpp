#include <iostream>
#include <climits>
using namespace std;

class MatrixChainMultiplication {
private:
	int n, *r, *c;
	int memory[100][100];
public:
	MatrixChainMultiplication(int _n, int _r[], int _c[]) {
		n = _n;
		r = _r;
		c = _c;
		for (int i=0; i<n; i++) {
			for (int j=1; j<=n; j++) {
				memory[i][j] = INT_MAX;
			}
		}
	}
	int count(int start, int end) {
		if (memory[start][end] != INT_MAX)
			return memory[start][end];
		
		if (start + 1 == end) {
			memory[start][end] = 0;
		} else {
			int temp;
			for (int i=start+1; i<end; i++) {
				temp = count(start, i) + count(i, end) + (r[start] * r[i] * c[end - 1]);
				if (memory[start][end] > temp) memory[start][end] = temp;
			}
		}
		return memory[start][end];
	}
};

int main() {
	int n, r[100], c[100];
	
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> r[i] >> c[i];
	}
	
	auto mcm = MatrixChainMultiplication(n, r, c);
	
	cout << mcm.count(0, n) << '\n';
	
	return 0;
}
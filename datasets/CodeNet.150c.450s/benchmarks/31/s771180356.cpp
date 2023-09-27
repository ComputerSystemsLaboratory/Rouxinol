#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long R[200000], m=-1000000000, min;
	int i, j, N;
	cin >> N;
	cin >> min;
	for (j = 0; j<N-1; j++) {
		cin >> R[j];
		if(R[j]-min>m) m = R[j] - min;
		if (min  > R[j]) min = R[j];
	}
	cout << m << endl;
}
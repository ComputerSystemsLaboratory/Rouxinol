#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main() {

	int i, j;
	deque <int> n;

	for(i=0; i<5; i++) {
		cin >> j;
		n.push_back(j);
	}

	sort(n.begin(), n.end());

	for(i=4; i>0; i--) {
		cout << n[i] << " ";
	}

	cout << n[i] << endl;

	return 0;

}
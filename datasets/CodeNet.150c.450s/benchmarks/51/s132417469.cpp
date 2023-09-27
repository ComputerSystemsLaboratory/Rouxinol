#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	bool ok[31] = {};

	for(int i = 0; i < 28; ++i) {
		int id;
		cin >> id;
		ok[id] = true;
	}

	for(int i = 1; i <= 30; ++i)
		if(!ok[i])
			cout << i << endl;

	return EXIT_SUCCESS;
}
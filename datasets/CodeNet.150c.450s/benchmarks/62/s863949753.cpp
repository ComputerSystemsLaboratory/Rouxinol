#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<int> n(3);
	cin >> n[0] >> n[1] >> n[2];
	sort(n.begin(),n.end());

	cout << n[0] << " " << n[1] << " " << n[2] << endl;

	return 0;
}

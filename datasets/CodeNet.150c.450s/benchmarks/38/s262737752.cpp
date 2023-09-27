#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n; cin >> n;
	for (int j = 0; j < n; ++j){
	int edges[3];
	for (int i = 0; i < 3; ++i)
		cin >> edges[i];
	sort(edges, edges+3);

	if (edges[0]*edges[0] + edges[1]*edges[1] == edges[2]*edges[2])
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	}

	return 0;
}
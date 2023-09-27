#include <iostream>
#include <algorithm>
using namespace std;
int main () {
	int v[3]; cin >> v[0];
	while (cin >> v[0] >> v[1] >> v[2]) {
		sort (v, v + 3);
		cout << (*v**v + *(v + 1)**(v + 1) == *(v + 2)**(v + 2) ? "YES" : "NO") << endl;
	}
}
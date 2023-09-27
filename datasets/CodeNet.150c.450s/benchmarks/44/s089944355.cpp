#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> a(4), b(4);
	while (cin >> a[0] >> a[1] >> a[2] >> a[3]) {
		for (int i = 0; i < 4; i++) {
			cin >> b[i];
		}
		int hit = 0, brow = 0;
		for (int i = 0; i < a.size(); i++) {
			if(a[i]==b[i])hit++;
			for (int j = 0; j < b.size(); j++) {
				if (i != j && a[i] == b[j])brow++;
			}
		}
		cout << hit << " " << brow << endl;
	}
	return 0;
}
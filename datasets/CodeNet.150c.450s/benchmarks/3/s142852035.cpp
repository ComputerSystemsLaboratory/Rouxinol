#include<iostream>
#include<string>
using namespace std;
int main() {
	string str, m, p, k, k2, k3[1000];
	int a, b, q, z = 0, j, l;
	cin >> str >> q;
	for (int i = 0; i < q; i++) {
		cin >> m >> a >> b;
		if (m == "replace") {
			cin >> p;
			str.replace(a, p.size(), p);
		}
		if (m == "reverse") {
			k = str.substr(a, b - a + 1);
			k2 = k;
			l = 0;
			for (j = k.size() - 1; j >= 0; j--) {
				k2[l] = k[j]; l = l + 1;
			}
			str.replace(a, k2.size(), k2);
		}
		if (m == "print") {
			if (a == 0 && b == str.size() - 1) {
				k3[z] = str;
			}
			else if (a == 0 && b == 0) {
				k3[z] = str[0];
			}
			else {
				k3[z] = str.substr(a, b - a+1);
			}
			z = z + 1;
		}
	}
	for (int w = 0; w < z; w++) {
		cout << k3[w] << endl;
	}
}



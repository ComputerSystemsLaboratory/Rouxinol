#include <bits/stdc++.h>
using namespace std;

struct die {
	int val[6];
	void N() {
		int tmp[6];
		for (int i = 0; i < 6; i++) {
			tmp[i] = val[i];
		}
		val[0] = tmp[1];
		val[4] = tmp[0];
		val[5] = tmp[4];
		val[1] = tmp[5];
	}
	void E() {
		int tmp[6];
		for (int i = 0; i < 6; i++) {
			tmp[i] = val[i];
		}
		val[2] = tmp[0];
		val[5] = tmp[2];
		val[3] = tmp[5];
		val[0] = tmp[3];
	}
	void W() {
		int tmp[6];
		for (int i = 0; i < 6; i++) {
			tmp[i] = val[i];
		}
		val[3] = tmp[0];
		val[5] = tmp[3];
		val[2] = tmp[5];
		val[0] = tmp[2];
	}
	void S() {
		int tmp[6];
		for (int i = 0; i < 6; i++) {
			tmp[i] = val[i];
		}
		val[0] = tmp[4];
		val[1] = tmp[0];
		val[5] = tmp[1];
		val[4] = tmp[5];
	}
	int find(int a, int b) {
		if ((val[3] == a && val[1] == b) || (val[1] == a && val[2] == b) || (val[2] == a && val[4] == b) || (val[4] == a && val[3] == b)) {
			return val[0];
		}
		if ((val[3] == a && val[5] == b) || (val[5] == a && val[2] == b) || (val[2] == a && val[0] == b) || (val[0] == a && val[3] == b)) {
			return val[1];
		}
		if ((val[0] == a && val[1] == b) || (val[1] == a && val[5] == b) || (val[5] == a && val[4] == b) || (val[4] == a && val[0] == b)) {
			return val[2];
		}
		if ((val[0] == a && val[4] == b) || (val[4] == a && val[5] == b) || (val[5] == a && val[1] == b) || (val[1] == a && val[0] == b)) {
			return val[3];
		}
		if ((val[0] == a && val[2] == b) || (val[2] == a && val[5] == b) || (val[5] == a && val[3] == b) || (val[3] == a && val[0] == b)) {
			return val[4];
		}
		if ((val[3] == a && val[4] == b) || (val[4] == a && val[2] == b) || (val[2] == a && val[1] == b) || (val[1] == a && val[3] == b)) {
			return val[5];
		}
	}
};

int main()
{
	int q, a, b;
	die d;
	for (int i = 0; i < 6; i++) {
		cin >> d.val[i];
	}
	cin >> q;
	while (q--) {
		cin >> a >> b;
		cout << d.find(a, b) << endl;
	}
	return 0;
}
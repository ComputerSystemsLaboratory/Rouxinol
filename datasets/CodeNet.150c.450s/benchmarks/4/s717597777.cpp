#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> rec;

	int m, f, r;
	while (cin >> m >> f >> r) {
		if (m == -1 && f == -1 && r == -1) {
			break;
		}

		if (m == -1 || f == -1) {
			rec.push_back(string("F"));
		}
		else if (m + f >= 80) {
			rec.push_back(string("A"));
		}
		else if (m + f >= 65 && m + f < 80) {
			rec.push_back(string("B"));
		}
		else if (m + f >= 50 && m + f < 65) {
			rec.push_back(string("C"));
		}
		else if(m + f >= 30 && m + f < 50){
			if (r >= 50) {
				rec.push_back(string("C"));
			}
			else {
				rec.push_back(string("D"));
			}
		}
		else if(m + f < 30) {
			rec.push_back(string("F"));
		}
	}

	for (int i = 0; i < rec.size(); i++) {
		cout << rec[i] << endl;
	}

	return 0;
}
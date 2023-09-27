#include <bits/stdc++.h>

using namespace std;

bool StudentStatus[31];

int main() {
	int id;
	
	memset(StudentStatus, false, sizeof(StudentStatus));
	for (int i = 0; i < 28; ++i) {
		cin >> id;
		StudentStatus[id] = true;
	}
	for (int i = 1; i < 31; ++i) {
		if (StudentStatus[i]) {
			continue;
		}
		cout << i << endl;
	}

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

const string button[] = {
	"",
	".,!? ",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz",
};

void solve() {
	string line;
	cin >> line;
	char pre = '0';
	int count = -1;
	for (unsigned i = 0; i < line.size(); ++i) {
		if (line[i] == '0') {
			int key = pre - '0';
			if (key == 0) continue;
			int index = count % button[key].size();
			cout << button[key][index];
			count = -2;
		}
		count++;
		pre = line[i];
	}
	cout << endl;
}

int main () {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		solve();
	}
	return 0;
}
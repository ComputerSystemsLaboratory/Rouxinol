#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int ans = 0;
	string w, t;
	cin >> w;
	transform(w.begin(), w.end(), w.begin(), ::tolower);
	while (1) {
		cin >> t;
		if (t.find("END_OF_TEXT", 0) != string::npos)
			break;
		transform(t.begin(), t.end(), t.begin(), ::tolower);
		if (t == w)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
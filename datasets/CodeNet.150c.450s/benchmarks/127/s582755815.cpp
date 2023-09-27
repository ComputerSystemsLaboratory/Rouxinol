#include <iostream>
#include <string>
#include <set>

using namespace std;

string reverse(string str) {
	return string(str.rbegin(), str.rend());
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		
		set<string> lines;
		for (unsigned int j = 1; j < str.size(); j++) {
			string head = str.substr(0, j);
			string tail = str.substr(j);
			//OãüêÖ¦Å2
			//½]Å2 * 2
			//æÁÄ8p^[
			for (int k = 0; k < 2; k++) {
				lines.insert(head + tail);
				lines.insert(head + reverse(tail));
				lines.insert(reverse(head) + tail);
				lines.insert(reverse(head) + reverse(tail));
				swap(head, tail);
			}
		}
		cout << lines.size() << endl;
	}
	return 0;
}
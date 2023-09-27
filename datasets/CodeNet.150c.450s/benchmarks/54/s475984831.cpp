#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string w, W, t, T;

	cin >> w;

	int count = 0;
	while (true) {

		cin >> t;

		if (t == "END_OF_TEXT") break;

		int count2 = 0, j = 0;
		for (int i = 0; i < t.length(); i++) {
			if (t.length() == w.length()) {
				if (t[i] == w[j] || t[i] == toupper(w[j])) {
					count2++;
					j++;
				}
				else {
					count2 = 0;
					j = 0;
				}
				if (count2 == w.length()) count++;
			}
		}
	}

	cout << count << "\n";
}
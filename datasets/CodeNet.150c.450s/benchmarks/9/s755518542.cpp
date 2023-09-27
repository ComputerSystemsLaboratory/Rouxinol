#include <iostream>
#include <string>
using namespace std;

int main()
{
	string set;
	int m;

	while(1) {
		cin >> set;
		if (set.compare(string("-")) == 0) break;
		cin >> m;

		int h;
		for (int i = 0; i < m; i++) {
			cin >> h;
			string move;
			for (int j = 0; j < h; j++)
				move[j] = set[j];
			for (int k = h; k < set.length(); k++)
				set[k-h] = set[k];
			for (int k = 0; k < h; k++)
				set[k+set.length()-h] = move[k];
		}

		for (int i = 0; i < set.length(); i++)
			cout << set[i];
		cout << endl;
	}
}
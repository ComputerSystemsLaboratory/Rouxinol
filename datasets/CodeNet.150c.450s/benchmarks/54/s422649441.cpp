#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main() {
	string W;
	string tlow;
	string endtext("END_OF_TEXT");
	getline(cin, W);
	transform(W.begin(), W.end(), W.begin(), ::tolower);

	string t;
	int count = 0;
	while(cin >> t) {
		tlow = t;
		transform(t.begin(), t.end(), tlow.begin(), ::tolower);
		if(tlow == W) count++;
		if(t == endtext) break;
	}
	cout << count << endl;
	return 0;
}
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

#define KANMA string(",")

int main(void) {
	int w, n;

	cin >> w;
	cin >> n;

	int *ary = new int[w];
	int i;
	for (i = 0; i < w; i++) {
		ary[i] = i + 1;
	}

	cin >> ws;
	for (i = 0; i < n; i++){
		int a, b;
		string str;
		string::size_type pos = 0;

		getline(cin, str);
		
		pos = str.find(KANMA, pos);
		a = atoi(str.substr(0, pos).c_str());
		pos += KANMA.length();
		b = atoi(str.substr(pos).c_str());

		int c = ary[a - 1];
		ary[a - 1] = ary[b - 1];
		ary[b - 1] = c;
	}

	for (i = 0; i < w; i++) {
		cout << ary[i] << endl;
	}

	return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
	string W, str;
	int cnt = 0;
	cin >> W;
	transform(W.begin(), W.end(), W.begin(), ::tolower);
	while(cin >> str) {
		if (str == "END_OF_TEXT") break;
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		if (W == str) cnt++;
	}
	cout << cnt << endl;
}
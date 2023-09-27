
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#define pi 3.14159265358979323846264338
using namespace std;

int main() {
	string str;
	cin >> str;
	string rts;
	for (int i = str.size(); i > 0; --i) {
		rts += str[i-1];
	}
	cout << rts << endl;
	return 0;
}
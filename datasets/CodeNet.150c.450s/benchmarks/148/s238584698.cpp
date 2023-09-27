#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
typedef long long ll;

int main()
{
	int n, c[4];
	cin >> n;
	for (int i = 0; i < 4; i++) {
		c[i] = 0;
	}
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "AC") {
			c[0]++;
		}
		else if (str == "WA") {
			c[1]++;
		}
		else if (str == "TLE") {
			c[2]++;
		}
		else if (str == "RE") {
			c[3]++;
		}
	}
	cout << "AC x " << c[0] << endl;
	cout << "WA x " << c[1] << endl;
	cout << "TLE x " << c[2] << endl;
	cout << "RE x " << c[3] << endl;
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, ac, wa, tle, re;
	N = 0; ac = 0; wa = 0; tle = 0; re = 0;
	string res;
	cin >> N;
	if (1 <= N && N <= 100000) {
		for (int i = 0; i < N; i++) {
			cin >> res;
			if (res == "AC") {
				ac += 1;
			}
			else if (res == "WA") {
				wa += 1;
			}
			else if (res == "TLE") {
				tle += 1;
			}
			else if (res == "RE") {
				re += 1;
			}
		}
		cout << "AC x " << ac << endl;
		cout << "WA x " << wa<< endl;
		cout << "TLE x " << tle<< endl;
		cout << "RE x " << re << endl;
		return 0;
	}
	return 0;
}
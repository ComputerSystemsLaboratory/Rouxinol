#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int C0 = 0;
	int C1 = 0;
	int C2 = 0;
	int C3 = 0;

	for (int i = 0; i < N; i++) {
		string S;
		cin >> S;

		if (S == "AC") {
			C0++;
		}
		else if (S == "WA") {
			C1++;
		}
		else if (S == "TLE") {
			C2++;
		}
		else if (S == "RE") {
			C3++;
		}
	}

	cout << "AC x " << C0 << endl;
	cout << "WA x " << C1 << endl;
	cout << "TLE x " << C2 << endl;
	cout << "RE x " << C3 << endl;
}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string Tc, Hc;
	int n = 0, t = 0, h = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> Tc >> Hc;

		unsigned int j = 0;

		for (j = 0; j < max(Tc.size(), Hc.size()); j++){
			if (Tc[j] > Hc[j]) {
				t += 3;
				break;
			}
			else if (Tc[j] < Hc[j]) {
				h += 3;
				break;
			}
		}

		if ((j == Tc.size()) && (Tc.size() == Hc.size())) {
			t++;
			h++;
		}
	}

	cout << t << " " << h << endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string tc, hc;
	int n, ts = 0, hs = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> tc >> hc;
		if (tc > hc) ts += 3;
		else if (tc < hc) hs += 3;
		else{
			ts++;
			hs++;
		}
	}

	cout << ts << " " << hs << endl;

	return 0;
}
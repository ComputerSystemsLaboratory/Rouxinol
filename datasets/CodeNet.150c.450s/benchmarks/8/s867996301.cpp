#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned int n;
	cin >> n;
	unsigned int ts = 0;
	unsigned int hs = 0;

	for (unsigned int i = 0; i < n; ++i) {
	    string t, h;
		cin >> t >> h;
		if (t == h) {
			ts += 1;
			hs += 1;
		} else if (t < h) {
			hs += 3;
		} else {
			ts += 3;
		}
	}
	cout << ts << " " << hs << endl;
	return 0;
}


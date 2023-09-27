#include <string>
#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	string t, h;

	int tscore = 0, hscore = 0;
	while(n-- && cin >> t >> h) {
		int cmp = t.compare(h);
		tscore += ((cmp>0) ? 3 : 0) + !cmp;
		hscore += ((cmp<0) ? 3 : 0) + !cmp;
	}
	cout << tscore << ' ' << hscore << endl;

	return 0;
}


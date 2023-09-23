#include <iostream>

using namespace std;

int main()
{
	int n, a, b, bt, at;

	while (cin >> n){
		at = bt = 0;

		for (int i = 0; i < n; i++){
			cin >> a >> b;
			if (a < b) bt += a + b;
			else if (b < a) at += a + b;
			else {
				at += a;
				bt += b;
			}
		}
		if (n != 0) cout << at << " " << bt << endl;
	}
	return (0);
}
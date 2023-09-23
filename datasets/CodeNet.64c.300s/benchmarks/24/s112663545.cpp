#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, a, b, as, bs;

	while (cin >> n, n){
		as = 0;
		bs = 0;
		for (int i = 0; i < n; i++){
			cin >> a >> b;
			if (a == b){
				as += a;
				bs += b;
			}
			else if (a == max(a, b)) as += a + b;
			else if (b == max(a, b)) bs += a + b;
		}
		cout << as << " " << bs << endl;
	}
	return (0);
}
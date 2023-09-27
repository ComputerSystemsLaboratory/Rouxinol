#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	int val, n, q;
	int s[10000], t[500];

	cin >> n;
	for (int i = 0; i<n && cin >> val; ++i) s[i] = val;

	cin >> q;
	for (int j = 0; j < q && cin >> val; ++j) t[j] = val;

	int count = 0;
	for (int j = 0; j < q; ++j){
		for (int i = 0; i < n; ++i){
			if (s[i] == t[j]){
				count++;
				break;
			}
		}
	}

	cout << count << endl;
	return 0;
}
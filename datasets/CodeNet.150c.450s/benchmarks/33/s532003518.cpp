#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>
#include <deque>
#include <utility>

using namespace std;


int main(void)
{
	int i, j, k;
	int n; //??°??????????????°
	int x[1000], y[1000], s[1000];
	int mx = 0;
	int temp;
	int count = 0; // x?????¨???s???????????????????????°
	vector<pair<int, int>> z; //??°???????¨????

	for (i = 0; ; i++) {
		cin >> x[i] >> y[i] >> s[i];
		if (x[i] == 0 && y[i] == 0 && s[i] == 0) {
			break;
		}

	}
	n = i;
	for (i = 0; i < n; i++) {
		mx = 0;

		for (j = 1; j < s[i]; j++) {
			for (k = j; k < s[i]; k++) {
				temp = j * (100 + x[i]) / 100 + k * (100 + x[i]) / 100;
				if (temp == s[i]) {
					temp = j * (100 + y[i]) / 100 + k * (100 + y[i]) / 100;
					if (temp > mx) {
						mx = temp;
					}
				}
			}

	
		}
		cout << mx << endl;


	}




	return (0);
}
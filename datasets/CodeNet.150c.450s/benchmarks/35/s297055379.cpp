#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a;
	vector<int> an;
	vector<vector<int>> AN;
	while (cin >> n) {
		if (n == 0)break;
		for (int i = 0; i < n; i++) {
			cin >> a;
			an.push_back(a);
		}
		AN.push_back(an); an.clear();
	}

	for (int i = 0; i < AN.size(); i++) {
		long long int max = 0, min = INT_MAX, MAX = 0, MIN = 0 , counter = 0, negative = 0;
		for (int j = 0; j < AN[i].size(); j++) {
			if (AN[i][j] >= 0) {
				max += AN[i][j];
				if (MAX < max)MAX = max;
				counter = 1;
				negative = 1;
			}
			
			else {
				if (negative == 0) {
						if(min > abs(AN[i][j]))min=abs(AN[i][j]);
					}
				else if (counter==1){
					if (AN[i][j] + max >= 0)max += AN[i][j];
					else {
						max = 0;
						counter = 0;
					}
				}
			}
		}
		if (negative == 0)cout << -1*min << endl;
		else cout << MAX << endl;
	}
	return 0;
}
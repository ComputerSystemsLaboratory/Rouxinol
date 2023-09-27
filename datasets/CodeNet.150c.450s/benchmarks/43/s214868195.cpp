#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;


int main(){
	int n;
	int ary1[10100];
	int ary2[10100];

	while (cin >> n, n != 0) {
		int sum1 = 0, sum2 = 0;
		for (int i = 0; i < n; i++) {
			cin >> ary1[i] >> ary2[i];
		}

		for (int i = 0; i < n; i++) {
			if (ary1[i] > ary2[i]) {
				sum1 += (ary1[i] + ary2[i]);
			}
			else if (ary1[i] < ary2[i]) {
				sum2 += (ary1[i] + ary2[i]);
			}
			else {
				sum1 += ary1[i];
				sum2 += ary2[i];
			}
		}

		cout << sum1 << " " << sum2 << endl;
	}

	return 0;
}
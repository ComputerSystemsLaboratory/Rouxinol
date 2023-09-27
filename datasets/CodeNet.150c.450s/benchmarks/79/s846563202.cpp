#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int hanafuda[51]{0};
	int tmpp[51]{0};
	vector<int> ansvec;

	for (;;){
		int n, r;
		cin >> n >> r;
		if (n == 0) break;

		for (int i = n; i >= 1; i--){
			hanafuda[i] = i;
		}

		for (int i = 0; i < r; i++){
			int p, c;
			cin >> p >> c;
			for (int j = 0; j < p - 1; j++){
				tmpp[p - 1 - j] = hanafuda[n - j];
			}
			for (int j = 0; j < c ; j++){
				hanafuda[n - j] = hanafuda[n - (p - 1) - j];
			}
			for (int j = 0; j < p - 1; j++){
				hanafuda[n - c - j] = tmpp[p - 1 - j];
			}
		}
		ansvec.push_back(hanafuda[n]);
	}

	for (int ans : ansvec){
		cout << ans << endl;
	}

	return 0;
}
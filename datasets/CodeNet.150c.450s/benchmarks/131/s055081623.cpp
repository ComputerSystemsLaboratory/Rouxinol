#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long int ll;

ll getNext(ll n, int digit) {
	vector<int> min_arr (digit);
	ll ll_max = 0, ll_min = 0;

	ll ans = 0;
	for (int i = 0; i < digit; i++, n /= 10) {
		min_arr[i] = n % 10;
	}
	sort(min_arr.begin(), min_arr.end());
	vector<int> max_arr (digit);
	for (int i = 0; i < digit; i++) {
		max_arr[digit - i - 1] = min_arr[i]; 
	}
	for (int i = 0; i < digit; i++) {
		ll_min += min_arr[i];
		ll_max += max_arr[i];
		ll_min *= 10;
		ll_max *= 10;
	}
	ll_min /= 10;
	ll_max /= 10;

	return ll_max - ll_min;
}

int main() {
	int M, N;
	while (true) {	
		cin >> M >> N;
		if (M == 0 && N == 0) break;
		ll emerged[21] = { M };
		int flag = true;
		for (int i = 1; i < 21 && flag; i++) {
			M = getNext(M, N);
			emerged[i] = M;
			for (int j = 0; j < i && flag; j++) {
				if (emerged[j] == M) {
					cout << j << " " << emerged[i] 
							 << " " << i - j << endl;
					flag = false;
				}
			}
		}
	}
	
	return 0;
}
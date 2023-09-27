#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {
	vector<int> prime_num{ 2, 3 };
	int n;

	while (cin >> n){
		int result;
		if (n <= 1) {
			result = 0;
		}
		else if (n == 2){
			result = 1;
		}
		else if (n < prime_num.back()){
			result = count_if(prime_num.begin(), prime_num.end(), [n](int a){return a <= n; });
		}
		else {
			for (int i = prime_num.back() + 2; i <= n; i += 2) {
				int temp = static_cast<int>( sqrt(i));
				auto it = find_if(prime_num.begin(), prime_num.end(), [temp](int a){return a > temp; });
				if (all_of(prime_num.begin(), it, [i](int a){return (i % a) != 0; })) {
					prime_num.push_back(i);
				}
			}
			result = prime_num.size();
		}

		cout << result << endl;
	}

	return 0;
}
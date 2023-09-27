#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string S, T[1000], U; int sum, maxn; int k, p[1000];
int main() {
	getline(cin, S);
	S += ' ';
	for (int i = 0; i <= S.size(); i++) {
		if (S[i] == ' ') {
			if (maxn < T[sum].size()) {
				maxn = T[sum].size(); U = T[sum]; 
			}
			sum++;
		}
		else {
			T[sum] += S[i];
		}
	}
	for (int i = 0; i < sum; i++) {
		p[i] = i;
		for (int j = 0; j < i; j++) {
			if (T[i] == T[j]) {
				p[j] += 10000; break;
			}
		}
	}
	sort(p, p + sum);
	cout << T[p[sum - 1] % 10000] << ' ' << U << endl;
	return 0;
}
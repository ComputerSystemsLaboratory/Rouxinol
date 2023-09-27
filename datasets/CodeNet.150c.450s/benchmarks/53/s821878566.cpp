#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int N;
vector<int> v;
int main() {
	cin >> N;
	int n = N;
	cout << N << ":";
	for (int i = 2; i*i <N; ++i) {
		while (n%i == 0) {
			cout <<" " << i;
			n /= i;
		}
		if (n == 1) break;
	}
	if (n != 1) cout << " " << n;
	cout << endl;
	return 0;
}

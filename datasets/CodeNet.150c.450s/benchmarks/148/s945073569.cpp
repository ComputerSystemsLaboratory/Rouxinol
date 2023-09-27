#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;
	map<string, int> cnt;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		cnt[s]++;
	}

	for (string s : {"AC", "WA", "TLE", "RE"}) {
		cout << s << " x " << cnt[s] << endl;
	}

	return 0;
}
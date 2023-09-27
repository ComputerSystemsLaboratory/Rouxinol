#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;
int main() {
	int n;
	vector<long long>li;
	while (cin >> n) {
		if (n == 0)break;
		vector<long long>l;
		long long a;
		for (int i = 0; i < n; i++){
			cin >> a;
			l.push_back(a);
		}
		sort(l.begin(), l.end());
		long long sum = 0;
		int g = l.size();
		for (int i = 1; i < g - 1; i++){
			sum += l[i];
		}
		li.push_back(sum / (g - 2));
	}
	for (long long i : li) {
		cout << i << endl;
	}
	char c;
	cin >> c;
	return 0;
}
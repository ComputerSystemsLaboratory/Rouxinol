#include <bits/stdc++.h>
using namespace std;

const int INF = 1e+9;
typedef pair<int, int> P;
typedef pair<P, int> pi;

int main() {
	vector<pi> data;
	for(int y = 1; y <= 150; ++y){
		for(int x = y + 1; x <= 150; ++x){
			data.push_back(pi(P(x * x + y * y, y), x));
		}
	}
	sort(data.begin(), data.end());
	int h, w;
	while(cin >> h >> w && (h || w)){
		int base = h * h + w * w;
		auto it = lower_bound(data.begin(), data.end(), pi(P(base, h), w));
		while((*it).first.first == base && (*it).first.second == h){
			++it;
		}
		cout << (*it).first.second << " " << (*it).second << endl;
	}
	return 0;
}
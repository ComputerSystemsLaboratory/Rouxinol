#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

typedef pair< int, int > PI;
typedef pair< double, PI > PDD;

vector< PDD > ans;


int main() {
	int h, w;

	for(int h = 1; h < 200; h++) {
		for(int w = 1; w < 200; w++) {
			if(w > h) {
				ans.push_back(PDD(sqrt((double)(h * h + w * w)), PI(h, w)));
			}
		}
	}

	sort(ans.begin(), ans.end());

	while(true) {
		cin >> h >> w;

		if(!h && !w) {
			break;
		}

		for(int i = 0; i < ans.size(); i++) {
			if(ans[i].second.first == h && ans[i].second.second == w) {
				cout << ans[i + 1].second.first << " " << ans[i + 1].second.second << endl;
				break;
			}
		}
	}
}
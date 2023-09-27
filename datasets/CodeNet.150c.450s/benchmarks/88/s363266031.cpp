#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b){
	int at = a.first * a.first + a.second * a.second;
	int bt = b.first * b.first + b.second * b.second;
	if(at == bt) return a.first < b.first;
	else return at < bt;
}

int main(void){
	int H, W;
	while(cin >> H >> W && H != 0 && W != 0){
		int t1 = H * H + W * W;
		vector< pair<int, int> > cand;
		for(int h = 1; h <= 150; h++){
			for(int w = h + 1; w <= 150; w++){
				int t2 = h * h + w * w;
				if(t2 > t1) cand.push_back(pair<int, int>(h, w));
				else if(t2 == t1 && h > H) cand.push_back(pair<int, int>(h, w));
			}
		}
		sort(cand.begin(), cand.end(), compare);
		cout << cand[0].first << " " << cand[0].second << endl;
	}
	return 0;
}
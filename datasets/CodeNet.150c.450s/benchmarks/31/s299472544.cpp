#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {


	int N;
	cin >> N;
	vector<int> vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}

	vector<int> maxMap;
	vector<int> maxIdx;
	int maxMax = 0; int tmpId = 0;

	for (int i = vec.size() - 1; i >= 0;i--) {

		if (vec[i] > maxMax) {
			maxMax = vec[i];
			tmpId =  i ;
		}
		maxMap.push_back(maxMax);
		maxIdx.push_back(tmpId );
	}
	reverse(maxMap.begin(), maxMap.end());
	reverse(maxIdx.begin(), maxIdx.end());
	

	int ans = vec[1] - vec[0];
	int min = vec[0];
	for (int i = 0; i < vec.size();i++) {
		if (vec[i] < min) {
			min = vec[i];
		}
		if (maxMap[i] - min > ans && maxIdx[i] > i) {
			ans = maxMap[i] - min;
		}

	}

	cout << ans << endl;

	return 0;
}


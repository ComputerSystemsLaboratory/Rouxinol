#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
	int n;
	while(1){
		int sum, result;
		cin >> n;
		if(n == 0){
			break;
		}
		vector<int> score;
		for(int i = 0; i < n; i++){
			int s;
			cin >> s;
			score.push_back(s);
		}
		sort(score.begin(), score.end());
		sum = accumulate(score.begin(), score.end(), 0);
		result = (sum - score[0] - score[n-1]) / (n-2);
		cout << result << endl;
	}
	return 0;
}
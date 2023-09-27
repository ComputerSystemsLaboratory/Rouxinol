#include <iostream>
#include <string>
#include <queue>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){

	int n;
	while(cin >> n, n){
		vector<int> score;
		for(int i=0; i<n; i++){
			int s; cin >> s;
			score.push_back(s);
		}
		sort(score.begin(), score.end());
		int sum = accumulate(score.begin(), score.end(),0);
		cout << ( sum - score.back() - score.front() )/ (score.size()-2) << endl;
	}

	return 0;
}
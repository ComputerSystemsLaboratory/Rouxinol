#include<iostream>
#include<algorithm>
#include<vector>

int main(){
	int n;
	while (std::cin >> n && n){
		std::vector<int> score;
		for (int i = 0; i < n; ++i){
			int s;
			std::cin >> s;
			score.push_back(s);
		}
		std::sort(score.begin(), score.end());
		score.pop_back();
		score.erase(score.begin());
		int ans = 0;
		int cnt = 0;
		for (auto it = score.begin(); it != score.end(); ++it){
			ans += *it;
			cnt++;
		}
		std::cout << ans/cnt << std::endl;
	}
	return 0;
}
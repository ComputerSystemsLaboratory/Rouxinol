#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int n;
	std::cin >> n;

	std::vector<int> figure;
	figure.resize(n);

	int buf;
	for(int i = 0; i < n; ++i){
		std::cin >> buf;
		figure[i] = buf;
	}

	std::vector<unsigned long long int> ans;
	ans.resize(21);

	ans[figure[0]] = 1;

	for(int i = 1; i < (n - 1); ++i){
		std::vector<unsigned long long int> buf_ans;
		buf_ans.resize(21);

		for(int j = 0; j < 21; ++j){
			if(ans[j] != 0){
				// minus
				if((j - figure[i]) >= 0){
					buf_ans[j - figure[i]] += ans[j];
				}
				// plus
				if((j + figure[i]) <= 20){
					buf_ans[j + figure[i]] += ans[j];
				}
			}
		}
		// copy
		ans.assign(buf_ans.begin(), buf_ans.end());
	}
	
	std::cout << ans[figure[n - 1]] << std::endl;

	return 0;
}
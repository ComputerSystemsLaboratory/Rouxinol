#include <iostream>
#include <vector>
#include <numeric>

std::vector<size_t> solve(const std::string s){
	std::vector<size_t> ponds;
	size_t sum = 0,end = 0;

	for(size_t i = 0; i < s.size(); ++i){

		if(i >= end && sum != 0){
			ponds.push_back(sum);
			sum = 0;
		}

		if(s[i] == '\\'){
			int depth = -1;
			const size_t size = s.size();
			for(size_t j = i+1; j < size; ++j){
				switch(s[j]){
					case '\\':
						--depth;
						break;
					case '/':
						++depth;
						if(depth == 0){
							sum += j-i;
							if(end < j) end = j;
							goto END;
						}
				}
			}
			END:;
		}

	}

	return ponds;
}

int main(){
	std::ios::sync_with_stdio(false);
	std::string s;
	std::cin >> s;
	auto ret = solve(s);
	std::cout << std::accumulate(ret.begin(),ret.end(),size_t(0)) << std::endl;
	std::cout << ret.size();
	for(auto&& v : ret){
		std::cout << ' ' << v;
	}
	std::cout << std::endl;
}
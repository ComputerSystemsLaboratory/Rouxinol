#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

unsigned solve(const std::vector<unsigned> w, const unsigned k){
	const unsigned limit_weight = std::accumulate(w.begin(),w.end(),unsigned(0));
	unsigned max_weight = *std::max_element(w.begin(),w.end());
	if(k == 1) return limit_weight;
	if(w.size() <= k) return max_weight;

	unsigned step = limit_weight/k;

	auto is_valid_division = [&w,&k](unsigned current_max_weight){
		size_t i = 0;
		auto rest = k;
		while(rest-- > 0){
			unsigned sum = 0;
			for(;i<w.size() && sum + w[i] <= current_max_weight;++i){
				sum += w[i];
			}
		}
		return (i == w.size());
	};

	FORWARD:
	for(; !is_valid_division(max_weight);max_weight += step);

	if(is_valid_division(max_weight-1) || !is_valid_division(max_weight+1)){
		step = (step/10 != 0 ? step/10 : 1);
		for(; is_valid_division(max_weight);max_weight -= step);
		if(step != 1){
			step = (step/10 != 0 ? step/10 : 1);
			goto FORWARD;
		}
		else{
			max_weight++;
		}
	}

	return max_weight;
}

int main(){
	std::ios::sync_with_stdio(false);
	{
		std::vector<unsigned> w;
		unsigned k;
		{
			unsigned n;
			std::cin >> n >> k;
			w.reserve(n);

			{
				unsigned buf;
				for(unsigned i=0;i<n;++i){
					std::cin >> buf;
					w.push_back(buf);
				}
			}
		}
		std::cout << solve(w,k) << std::endl;
	}
}
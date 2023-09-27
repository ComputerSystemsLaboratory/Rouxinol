#include <iostream>
#include <deque>
#include <cstdint>
#include <string>
#include <algorithm>

typedef std::deque<std::uint64_t> DType;

int main() {
	DType D;
	std::uint64_t N;
	std::uint64_t C;
	std::string S;
	std::cin >> C;

	DType::iterator it = D.begin();

	for (std::size_t i = 0; i < C; i++) {
		if (!(std::cin >> S)) break;
		if (S[0] == 'i' ||S[0] == 'I') {//insert
			std::cin >> N;		
			D.push_front(N);
			continue;
		}
		if (S.size() == 6) {//delete
			std::cin >> N;	
			auto it=std::find(D.begin(), D.end(), N);
			if(it!= D.end())D.erase(it);
			continue;
		}
		if (S.size() == 11) {//deletefirst
			D.pop_front();
			continue;
		}
		if (S.size() == 10) {//deletelast
			D.pop_back();
			continue;
		}
	}

	for (auto it = D.begin(); it != D.end(); it++) {
		if(it!=D.begin())std::cout << ' ';

		std::cout << *it;
	}

	std::cout<<std::endl;

	return 0;
}
#include <iostream>
#include <string>

#define _For(idx, from, to, inc, cmp) \
	for(auto idx=(from) ; idx cmp (to) ; inc idx)
#define ForLE(idx, from, to) \
	_For(idx, from, to, ++, <=)
#define For(idx, from, to) \
	_For(idx, from, to, ++, <)

constexpr int MaxLen = 1000;
int Memo[MaxLen+1][MaxLen+1];
int main() {
	std::string line;
	const auto nextline = [&line](){
		std::getline(std::cin, line);
	};
	nextline();
	const int NQ = std::stoi(line);
	For(i, 0, NQ) {
		std::string s0, s1;
		std::getline(std::cin, s0);
		std::getline(std::cin, s1);

		int len0 = s0.length(),
			len1 = s1.length();
		if(len0 < len1) {
			std::swap(s0, s1);
			std::swap(len0, len1);
		}
		ForLE(j, 0, len0)
			Memo[j][0] = 0;
		ForLE(j, 0, len1)
			Memo[0][j] = 0;

		ForLE(j, 1, len1) {
			ForLE(k, 1, len0) {
				int res = std::max(
								Memo[k][j-1],
								Memo[k-1][j]
							);
				if(s0[k-1] == s1[j-1])
					res = std::max(Memo[k-1][j-1] + 1, res);
				Memo[k][j] = res;
			}
		}
		std::cout << Memo[len0][len1] << std::endl;
	}
	return 0;
}
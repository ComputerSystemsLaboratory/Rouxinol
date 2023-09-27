#include <vector>
#include <cstdio>

void add(const int &index, const int &value, std::vector<int> &vec){
	vec.at(index) += value;
	if (index != 0){
		add((index - 1) >> 1, value, vec);
	}
}
int get_sum(const int &start, const int &end, const std::vector<int> &vec){
	if (start == end){
		return vec.at(start);
	}else if (start > end){
		return 0;
	}else{
		int sum = get_sum(start  >> 1, ((end - 2) >> 1) , vec);
		if (start % 2 == 0){
			sum += vec.at(start);
		}
		if (end % 2 == 1){
			sum += vec.at(end);
		}
		return sum;
	}
}
int main(){
	int n, q;
	std::scanf("%d %d", &n, &q);
	int size = 2;
	while (n != 1){
		n >>= 1;
		size <<= 1;
	}
	std::vector<int> vec(size * 2 - 1, 0);
	--size;
	for (auto i = 0; i < q; ++i){
		int com, x, y;
		std::scanf("%d %d %d", &com, &x, &y);
		if (com == 0){
			add(size + x, y, vec);
		}else{
			std::printf("%d\n", get_sum(size + x, size + y, vec));
		}
	}
}
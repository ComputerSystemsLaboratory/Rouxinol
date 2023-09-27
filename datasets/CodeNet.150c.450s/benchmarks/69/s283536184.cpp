#include <iostream>

const int size = 10;

int num[size];

bool dfs(int beforeB, int beforeC, int depth) {
	if(depth == 10)
		return true;
	
	if(num[depth] > beforeB)
		return dfs(num[depth], beforeC, depth + 1);
	else if(num[depth] > beforeC)
		return dfs(beforeB, num[depth], depth + 1);
	else
		return false;
}

int main() {
	int n = 0;
	std::cin >> n;
	
	for(int i = 0; i < n; ++i) {
		for(auto&& x : num)
			std::cin >> x;
		
		std::cout << (dfs(0, 0, 0) ? "YES" : "NO") << std::endl;
	}
}
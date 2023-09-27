#include<iostream>
#include<algorithm>

int main(){
	int n;
	int in[3];
	bool ans[1000];
	std::cin >> n;
	for (int i = 0; i < n; ++i){
		std::cin >> in[0] >> in[1] >> in[2];
		std::sort(std::begin(in), std::end(in));
		ans[i] = (in[2] * in[2] == in[0] * in[0] + in[1] * in[1]);
	}
	for (int i = 0; i < n; ++i){
		if (ans[i])std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;
	}
	return 0;
}
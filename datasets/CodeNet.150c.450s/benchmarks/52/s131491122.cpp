#include <iostream>
#include <deque>

int main(){
	std::deque<int> que;
	int tmp;
	while(std::cin >> tmp){
		if(tmp == 0){
			std::cout << que.back() << std::endl;
			que.pop_back();
		}
		else que.push_back(tmp);
	}
		return 0;
	}
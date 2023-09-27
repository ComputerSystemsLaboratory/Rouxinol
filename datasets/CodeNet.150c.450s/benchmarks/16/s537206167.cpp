#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

#define INPUT_FROM_FILE (0)
#if INPUT_FROM_FILE
#include <fstream>
#endif

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	std::string str;

#if INPUT_FROM_FILE
	ifs >> str;
#else
	std::cin >> str;
#endif

	std::deque<std::pair<int, int> > answer;
	std::deque<int> s;
	int sum_area = 0;

	for(unsigned int i = 0; i < str.size(); i++){
		if(str.at(i) == '\\'){
			s.push_back(i);
		}
		else if(str.at(i) == '/' && !s.empty()){
			int sp = s.back();
			int area = i - sp;

			s.pop_back();
			while(!answer.empty() && sp <= answer.back().first){
				area += answer.back().second;
				answer.pop_back();
			}
			answer.push_back(std::pair<int, int>(sp, area));
		}
	}

	for(unsigned int i = 0; i < answer.size(); i++){
		sum_area += answer[i].second;
	}

	std::cout << sum_area << std::endl;
	std::cout << answer.size();
	for(unsigned int i = 0; i < answer.size(); i++){
		std::cout << " " << answer[i].second;
	}
	std::cout << std::endl;

	return 0;
}

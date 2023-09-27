#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	int n = 0;
	std::cin >> n;
	int score[2] = {0,0};
	std::string taro;
	std::string hanako;
	for(int i = 0 ; i < n ; i ++){
		std::cin >> taro;
		std::cin >> hanako;
		if(taro.compare(hanako) < 0){
			score[0] += 3;
		}else if(taro.compare(hanako) == 0){
			score[0] += 1;
			score[1] += 1;
		}else{
			score[1] += 3;
		}
	}
	std::cout << score[1] << " " << score[0] << std::endl;
	return 0;
}
#include <iostream>
#include <vector>

int main(){
	std::vector<int> rail;
	std::vector<int> out;
	int a;

	while(std::cin >> a){
		if(a != 0){
			rail.push_back(a);
		}else if(a == 0){
			out.push_back(rail.back());
			rail.pop_back();
		}else{
			break;
		}
	}

	for(int i=0; i<(int)out.size(); ++i){
		std::cout << out.at(i) << std::endl;
	}
}
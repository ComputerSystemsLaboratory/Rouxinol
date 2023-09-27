#include <iostream>
#include <vector>

int calc_truck_num(std::vector<int> wi, int P){
	std::vector<int> truck;
	truck.push_back(0);
	for (int i = 0; i < wi.size(); ++i){
		if(truck.back()+wi[i]<=P){
			truck.back() += wi[i];
		}else{
			truck.push_back(wi[i]);
		}
	}
	return truck.size();
}

int main(int argc, char const *argv[]){
	int n,k,w;
	int cnt = 0;
	int right = 0;
	int left = 0;
	int center;

	std::vector<int> wi;

	std::cin >> n >> k;
	for (int i = 0; i < n; ++i){
		std::cin >> w;
		wi.push_back(w);
		right += w; 
		if(w>left) left = w;
	}

	while(right-left>1){
		center = (right+left)/2;
		if(calc_truck_num(wi,center)>k){
			left = center;
		}else{
			right = center;
		}
	}

	if(calc_truck_num(wi,left)<=k){
		std::cout << left << std::endl;
	}else{
		std::cout << right << std::endl;
	}

	return 0;
}

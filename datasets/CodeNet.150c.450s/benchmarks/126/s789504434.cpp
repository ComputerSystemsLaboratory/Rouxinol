#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int a,b,x,y;

	while(std::cin >> a >> b){

		if(a == 0 && b == 0){
			break;
		}

		std::vector< std::vector<int> > road(a,std::vector<int>(b,1));
		int num = 0;

		std::cin >> num;

		for(int i=0; i<num; ++i){
			std::cin >> x >> y;
			road.at(x-1).at(y-1) = 0;
		}

		for(int i=0; i<a; ++i){
			for(int j=0; j<b; ++j){

				//start point & point under construction
				if(road.at(i).at(j) != 0 && (i+j) != 0){
					if(i == 0){
						if(road.at(i).at(j-1) != 0){
							road.at(i).at(j) = road.at(i).at(j-1);
						}else{
							road.at(i).at(j) = 0;
						}
					}else if(j == 0){
						if(road.at(i-1).at(j) != 0){
							road.at(i).at(j) = road.at(i-1).at(j);
						}else{
							road.at(i).at(j) = 0;
						}
					}else{
						road.at(i).at(j) = road.at(i).at(j-1) + road.at(i-1).at(j);
					}
				}

			}
		}

		std::cout << road.at(a-1).at(b-1) << std::endl;
	}

}
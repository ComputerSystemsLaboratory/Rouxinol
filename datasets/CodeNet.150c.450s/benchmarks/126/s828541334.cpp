#include <iostream>
#include <array>
#include <iterator>

int main(){
	int length,width;

	while(std::cin >> width >> length){
		std::array<int, 256> crossing = {0}; //16*16
		
		if(width == 0 && length == 0) break;

		int construction;
		std::cin >> construction;

		for(int i = 0; i < construction; ++i){
			int con_length, con_width;
			std::cin >> con_width >> con_length;
			crossing[con_width + (width * (con_length - 1)) - 1] = -1; //construction = -1
		}

		crossing[0] = 1; //start
		
		int cros_num = 0;
		for(auto itr = crossing.begin(); itr != crossing.end(); ++itr){

			if(*itr != -1){ //not crossing

				//considering left crossing
				if(cros_num % width != 0){ //no left
					--itr;
					if(*itr != -1){ //left not construction
						int buf = *itr;
						++itr;
						*itr += buf; //plus left
					}else{
						++itr;
					}
				}
				//considering down crossing
				if(cros_num >= width){ //no down
					itr -= width;
					if(*itr != -1){ //down not construction
						int buf = *itr;
						itr += width;
						*itr += buf; //plus down
					}else{
						itr += width;
					}
				}
			
			}
			++cros_num;
			
			if(cros_num == length * width){
				std::cout << *itr << std::endl;	
				break;
			}
		}

	}
	return 0;
}
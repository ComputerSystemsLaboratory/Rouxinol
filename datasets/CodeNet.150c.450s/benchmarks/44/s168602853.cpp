#include <iostream>
#include <vector>

int main(){
	std::vector<int> a(4);
	std::vector<int> b(4);
	int hit_num;
	int blow_num;
	
	while(std::cin >> a[0] >> a[1] >> a[2] >> a[3]){
		std::cin >> b[0] >> b[1] >> b[2] >> b[3];
		hit_num = 0;
		blow_num = 0;
		for(int i = 0; i < 4; ++i){
			if(a[i] == b[i]) ++hit_num;
			for(int j = 0; j < 4; ++j){
				if(i != j && a[i] == b[j]) ++blow_num;
			}
		}
		std::cout << hit_num << " " << blow_num << std::endl;
	}
}
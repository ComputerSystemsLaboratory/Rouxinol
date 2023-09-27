#include <iostream>
#include <vector>

int main(){
	std::vector<int> a(4, 0), b(4, 0);
	
	while(std::cin >> a[0] >> a[1] >> a[2] >> a[3]){
		std::cin >> b[0] >> b[1] >> b[2] >> b[3];
		int hit = 0, blow = 0;
		for(int i = 0 ; i < 4 ; ++i){
			if(a[i] == b[i]){
				++hit;
				continue;
			}
			for(int j = 0 ; j < 4 ; ++j){
				if(a[i] == b[j])
					++blow;
			}
		}
		std::cout << hit << " " << blow << std::endl;
	}
    return 0;
}
#include <iostream>
#include <vector>

				
int main(){
	std::vector<int> a,b;
	a.resize(4);
	b.resize(4);
	while(std::cin >> a[0] >> a[1] >> a[2] >> a[3]){
		std::cin >> b[0] >> b[1] >> b[2] >> b[3];
		int hit = 0;
		int blow = 0;
		for(int i = 0; i <= 3; ++i){
			if(a.at(i) == b.at(i))
				++hit;
		}
		for(int i = 0; i <= 3; ++i){
			for(int j = 0; j <= 3; ++j){
				if(a.at(i) == b.at(j))
					++blow;
			}
		}
		
		std::cout << hit << " " << blow - hit << std::endl;
	}
	
	return 0;
}
	
	
	
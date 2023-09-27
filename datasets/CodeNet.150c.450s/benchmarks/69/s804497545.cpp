#include <iostream>
#include <algorithm>
#include <cstdio>

int main(){
	int c, tmp, d[2] = {0};
	bool res;

	scanf("%d", &c);

	while(c--){
		res = true;
		d[0] = d[1] = 0;

		for(int i = 0; i < 10; ++i){
			std::cin >> tmp;
		
			if( d[0] < tmp ){
				if(d[1] < tmp){
					*std::max_element(d, d + 1) = tmp;
				}else{
					d[0] = tmp;
				}
			}else if( d[1] < tmp ){
				d[1] = tmp;
			}else{
				res = false;
				//break;
			}
		}

		std::cout << (res ? "YES" : "NO") << std::endl;
	}

	return 0;
}
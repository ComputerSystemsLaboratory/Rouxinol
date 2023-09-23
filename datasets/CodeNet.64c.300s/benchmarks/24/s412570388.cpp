#include <iostream>

int main(){
	int n;
	while( std::cin >> n, n ){
		int sum_pt[2] = { 0, 0 };
		int pt[2];

		while( n-- ){
			std::cin >> pt[0] >> pt[1];

			if( pt[0] > pt[1] ){
				sum_pt[0] += pt[0] + pt[1];
			}else if( pt[0] < pt[1] ){
				sum_pt[1] += pt[0] + pt[1];
			}else{
				sum_pt[0] += pt[0];
				sum_pt[1] += pt[1];
			}
		}

		std::cout << sum_pt[0] << " " << sum_pt[1] << std::endl;
	}

	return 0;
}
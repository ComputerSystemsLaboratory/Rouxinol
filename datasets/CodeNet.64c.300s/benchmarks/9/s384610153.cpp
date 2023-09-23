#include <iostream>

int main(){
	
	int n, debt = 100000;
	std::cin >> n; // input
	// calc debt
	for(int i = 0; i < n; ++i){
		debt *= 1.05;
		// need this process for submitting
		if(debt % 1000 != 0){
			debt += 1000;
			debt -= debt % 1000;
		}
	}
	// output
	std::cout << debt << std::endl;
	return 0;
}
#include <iostream>



int main(){
	int data[3];
	int tmp;

	std::cin >> data[0] >> data[1] >> data[2];
	for (int i = 0; i < 3; i++){
		for (int j = 2; j > 0 + i; j--){
			if (data[j] < data[j - 1]){
				tmp = data[j];
				data[j] = data[j - 1];
				data[j - 1] = tmp;
			}
		}
	}
	std::cout << data[0] << " " << data[1] << " " << data[2] << "\n";

	return 0;
}
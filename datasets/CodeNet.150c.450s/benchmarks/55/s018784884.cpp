#include <iostream>
#include <cstring>

int main(){
	char num[1001];
	int sum;
	int num_size;
	while(true){
		sum = 0;

		std::cin >> num;
		if(strcmp(num, "0")==0) break;

		num_size = strlen(num);
		for(int i=0; i<num_size; i++){
			sum += num[i] - '0';
		}
		std::cout << sum << std::endl;
	}
}
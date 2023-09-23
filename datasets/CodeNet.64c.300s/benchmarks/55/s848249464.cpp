#include<iostream>

int main(void){
	int i=0;
	int x[10000];
	while(1){
		std::cin >> x[i];
		if(x[i]==0) break;
		i=i+1;
	}
	for(int j=0;j<i;j++) std::cout << "Case " << j+1 << ": " << x[j] << std::endl;
	return 0;
}
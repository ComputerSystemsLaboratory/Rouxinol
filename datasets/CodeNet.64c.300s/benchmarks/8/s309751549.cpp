#include<iostream>
int main(){
	int n,i,a;
	std::cin >> n;
	for (i = 1; i <= n; i++){
		if (i % 3 == 0){
			std::cout << " " << i;
		}
		else{
			a = i;
			while (true){
				
				if (a ==0){
					break;
				}
				else if(a % 10 == 3){
					std::cout << " " << i;
					break;
				}
				else{
					a /= 10;
				}
			}
		}
	}std::cout << "\n";
	return 0;
}
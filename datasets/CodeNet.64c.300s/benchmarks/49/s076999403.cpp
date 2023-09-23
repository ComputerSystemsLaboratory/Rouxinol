#include<iostream>
int main(){
	int Digit, a, b, sum;

	while (std::cin >> a >> b){
		Digit = 0;
		sum = a + b;
		while (sum > 0){
			Digit++;
			sum /= 10;
		}
		std::cout<<Digit<<std::endl;
	}
return 0;
}
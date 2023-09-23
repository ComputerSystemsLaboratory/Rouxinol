#include<iostream>
int main(){
	int N;
	int a, b, c;
	std::cin >> N;
	for(int i = 0; i < N; i++){
		std::cin >> a >> b >> c;
		if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
			std::cout << "YES" << std::endl;
		}
		else{
			std::cout << "NO" << std::endl;
		}
	}
	return 0;
}
#include<iostream>
int main(void){
	int time;
	std::cin >> time;
	std::cout << time / 3600 << ":" << (time % 3600) / 60 << ":" << (time % 3600) % 60  << std::endl;
	return 0;
}
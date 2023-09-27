#include<iostream>
#include<algorithm>
int main(){
	int goat[3];
	std::cin >> goat[0] >> goat[1] >> goat[2];
	std::sort(goat, goat + 3);
	std::cout << goat[0] << " " << goat[1] << " " << goat[2] << "\n";
}
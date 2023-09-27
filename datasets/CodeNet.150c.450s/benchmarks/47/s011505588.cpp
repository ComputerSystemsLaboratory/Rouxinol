#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char **argv){
	int W = 0;
	int H = 0;
	int x = 0;
	int y = 0;
	int r = 0;
	int tmpW = 0;
	int tmpH = 0;

	std::cin >> W >> H >> x >> y >> r;

	tmpW = W - r;
	tmpH = H - r;

	if(r <= x && x <= tmpW && r <= y && y <= tmpH){
		std::cout << "Yes";
	}
	else{
		std::cout << "No";
	}
	std::cout << std::endl;

	return 0;
}
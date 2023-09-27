#include <iostream>
#include <stdio.h>
int main(){
	int W,H,x,y,r,w,h;
	std::cin >> W;
	std::cin >> H;
	std::cin >> x;
	std::cin >> y;
	std::cin >> r;	
	w=W-r;
	h=H-r;
	if(r<=x && x<=w && r<=y && y<=h)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return 0;
}
#include<iostream>

int main(){
	
	int W,H,x,y,r;
	
	std::cin >> W >> H >> x >> y >> r;
	
	if (r<=x && x<=W-r && r<=y && y<=H-r) std::cout <<"Yes"<<"\n";
	else std::cout <<"No"<<"\n";
	
	return 0;
	
}
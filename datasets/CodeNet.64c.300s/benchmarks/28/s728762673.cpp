# include <iostream>

int main(){
	int W, H , x, y ,r;
	std::cin >> W >> H >> x >> y >> r;

// 0 <= x -r, x + r  <= W
// 0 <= y -r, y + r <= H
	bool b = true;
	if( r > x)
		b = false;
	if( r > y)
		b = false;
	if(x + r > W)
		b = false;
	if(y + r > H)
		b = false;
	if(b)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;

	return 0;
}
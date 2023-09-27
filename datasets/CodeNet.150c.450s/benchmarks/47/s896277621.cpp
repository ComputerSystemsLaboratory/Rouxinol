#include<iostream>

bool isInRec(const int W, const int x, const int r)
{
	int p = x - r, q = x + r;
	if(p >= 0 && q <= W){
		return true;
	} else {
		return false;
	}
}

int main()
{
	int W, H, x, y, r;
	std::cin >> W >> H >> x >> y >> r;
	if(isInRec(W, x, r) && isInRec(H, y, r)){
		std::cout << "Yes\n";
	} else {
		std::cout << "No\n";
	}
	return 0;
}
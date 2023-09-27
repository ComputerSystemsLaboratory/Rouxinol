#include<iostream>
#include<algorithm>

int main(){
	int a, b, c, d;
	int e, f, g, h;
	std::cin >> a >> b >> c >> d;
	std::cin >> e >> f >> g >> h;
	std::cout << std::max(a + b + c + d, e + f + g + h) << std::endl;
	return 0;
}
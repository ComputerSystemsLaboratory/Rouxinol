#include <iostream>

struct Point {
	double x;
	double y;
};

int main(void)
{
	struct Point p[4];
	int n;
	std::cin >> n;
	for(int j=0; j<n; j++){
	for(int i=0; i<4; i++)
		std::cin >> p[i].x >> p[i].y;
	double t1,t2;
	if( (p[1].y-p[0].y)/(p[1].x-p[0].x) == (p[3].y-p[2].y)/(p[3].x-p[2].x) )
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	}
	return 0;
}
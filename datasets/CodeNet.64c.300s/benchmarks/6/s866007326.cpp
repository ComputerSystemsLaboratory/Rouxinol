#include <iostream>

//4b?£?*3f???*10r??¨?±?*v???
int main(int argc, char const* argv[])
{
	int n;
	int b, f, r, v;
	int d[4][3][10] = {0};
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> b>> f>> r>> v ;
		d[b-1][f-1][r-1] += v;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				std::cout <<' '<< d[i][j][k];
			}
			std::cout << std::endl;
		}
		if (i<3) std::cout << "####################" << std::endl;
	}
	return 0;
}
#include <iostream>
double x[3], y[3], xp, yp;
int main() {
	while (std::cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>xp>>yp) {
		int bit = 3;
		for (int i=0; i<3; ++i) {
			double tmp = (x[(i+1)%3]-x[i])*(yp-y[i])-(y[(i+1)%3]-y[i])*(xp-x[i]);
			bit &= ~((tmp < 0) + 1);
		}
		std::cout << (bit ? "YES" : "NO") << "\n";
	}
}
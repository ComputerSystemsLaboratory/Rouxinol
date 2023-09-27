#include <iostream>
#include <string.h>

const int SIZE = 20+1;

int main() {
	long int n, i, ii, m, r;
	long int gp[SIZE], gp_[SIZE], *gpp, *gpp_, *tmpp;
	memset(gp, 0, sizeof(gp));
	gpp = gp;
	gpp_ = gp_;

	std::cin >> n;
	std::cin >> m;
	gpp[m] = 1;

	for (i=2; i<n; i++) {
		memset(gpp_, 0, sizeof(gp_));
		std::cin >> m;
		for (ii=0; ii<SIZE; ii++) {
			if (r=gpp[ii]) {
				if (ii+m<SIZE)
					gpp_[ii+m] += r;
				if (ii-m>=0)
					gpp_[ii-m] += r;
			}
		}
		tmpp = gpp;
		gpp = gpp_;
		gpp_ = tmpp;
	}

	std::cin >> m;
	std::cout << gpp[m] << '\n';
	return 0;
}
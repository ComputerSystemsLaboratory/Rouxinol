#include <iostream>
int main(void) {
	unsigned int h, w, d, mh, mw, md, i, j, nd;
	while(1) {
		std::cin >> h >> w;
		if (!h && !w) return 0;
		d = h * h + w * w, md = (unsigned int)-1;
		for (i = 1; i < 150; i++) {
			for (j = i + 1; j < 150; j++) {
				nd = i * i + j * j;
				if (d < nd || (d == nd && h < i)) break;
			}
			if (j < 150 && nd < md) md = nd, mh = i, mw = j;
		}
		std::cout << mh << ' ' << mw << std::endl;
	}
	return 0;
}
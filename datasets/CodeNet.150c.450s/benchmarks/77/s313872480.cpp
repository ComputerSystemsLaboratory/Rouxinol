#include <iostream>
#include <vector>

const int WIDTH = 21;
const int HEIGHT = 21;
const int INIT_X = 10;
const int INIT_Y = 10;

int main()
{
	int n;
	while (std::cin >> n, n != 0) {
		// ツフツィツーツδ仰ドツづーツ渉可甘コツ可サ (ツ可スツづ?づ按つ「ツ湘ウツ妥?
		std::vector< std::vector<bool> > f(HEIGHT, std::vector<bool>(WIDTH, false));

		// ツフツィツーツδ仰ドツづ可陛ウツ静篠づーツ配ツ置
		for (int i = 0; i < n; ++i) {
			int x, y;
			std::cin >> x >> y;
			f[y][x] = true;
		}

		// ツδ債ボツッツトツづーツ暗堋督ョツつウツつケツづゥ
		int robotX = INIT_X;
		int robotY = INIT_Y;
		int m;
		std::cin >> m;
		for (int i = 0; i < m; ++i) {
			char d;
			int l;
			std::cin >> d >> l;
			const int addX = (d == 'E') ? 1
				: (d == 'W') ? -1
				: 0;
			const int addY = (d == 'N') ? 1
				: (d == 'S') ? -1
				: 0;
			for (int i = 0; i < l; ++i) {
				f[robotY][robotX] = false;
				robotX += addX;
				robotY += addY;
			}
			f[robotY][robotX] = false;
		}

		// ツ陛ウツ静篠つェツ残ツづ?づ?つ「ツづ按つ「ツつゥツ陳イツづ猟づゥ
		bool exist = false;
		for (int y = 0; y < HEIGHT; ++y) {
			for (int x = 0; x < WIDTH; ++x) {
				if (f[y][x]) {
					exist = true;
				}
			}
		}

		// ツ出ツ療?
		std::cout << ((!exist) ? "Yes" : "No") << std::endl;
	}
	return 0;
}
#include <iostream>
#include <vector>

struct Map {
	std::vector<bool> data; // true ????????¶
	int width;
	int height;

	void initialize(int width, int height) {
		this->width = width;
		this->height = height;
		data.resize(width * height);
	}

	bool is_ground(int x, int y) {
		return data[y * width + x];
	}

	void set_as_sea(int x, int y) {
		data[y * width + x] = false;
	}
};

void paint(Map& map, int x, int y) {
	if (x < 0 || x >= map.width || y < 0 || y >= map.height) return;
	if (!map.is_ground(x, y)) return;

	map.set_as_sea(x, y);

	paint(map, x - 1, y - 1);
	paint(map, x - 1, y);
	paint(map, x - 1, y + 1);
	paint(map, x, y - 1);
	paint(map, x, y + 1);
	paint(map, x + 1, y - 1);
	paint(map, x + 1, y);
	paint(map, x + 1, y + 1);
}

int main()
{
	Map map;

	while (true) {
		int w, h;
		std::cin >> w >> h;

		if (w == 0) return 0;

		map.initialize(w, h);

		for (int i = 0; i < w * h; i++) {
			int c;
			std::cin >> c;
			map.data[i] = c == 1;
		}

		int count = 0;

		for (int y = 0; y < h; y++) {
			for (int x = 0; x < w; x++) {
				if (map.is_ground(x, y)) {
					count++;
					paint(map, x, y);
				}
			}
		}

		std::cout << count << std::endl;
	}
}
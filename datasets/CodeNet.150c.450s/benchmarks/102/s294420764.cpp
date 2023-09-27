#include <iostream>
#include <string>
#include <sstream>
#include <vector>

struct MapHeader {
	int w;
	int h;
};

MapHeader read_header() {
	std::string line;
	std::getline(std::cin, line);
	std::istringstream line_stream(line);
	MapHeader result;
	line_stream >> result.w >> result.h;
	return result;
}

struct SearchContext {
	MapHeader header;
	std::vector<bool> map;
	size_t count;

	SearchContext(MapHeader header)
		: header(header),
		count(0)
	{
		map.reserve(header.w * header.h);
	}

	size_t index(int x, int y) {
		return (size_t)header.w * y + x;
	}
};

void search(SearchContext& context, int x, int y) {
	if (x < 0 || x >= context.header.w || y < 0 || y >= context.header.h) return;

	size_t index = context.index(x, y);
	if (context.map[index]) return;

	context.map[index] = true;
	context.count++;
	
	search(context, x + 1, y);
	search(context, x - 1, y);
	search(context, x, y + 1);
	search(context, x, y - 1);
}

int main()
{
	while (true) {
		MapHeader header = read_header();
		if (header.w == 0 && header.h == 0) break;

		SearchContext context(header);
		int start_x, start_y;

		std::string line;
		line.reserve(header.w + 2);

		for (int y = 0; y < header.h; y++) {
			line.clear();
			std::getline(std::cin, line);

			for (int x = 0; x < header.w; x++) {
				switch (line[x]) {
				case '.':
					context.map.push_back(false);
					break;
				case '#':
					context.map.push_back(true);
					break;
				case '@':
					start_x = x;
					start_y = y;
					context.map.push_back(false);
					break;
				}
			}
		}

		search(context, start_x, start_y);
		std::cout << context.count << std::endl;
	}

    return 0;
}
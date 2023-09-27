#include <iostream>
#include <sstream>

auto toTimeFormat(int inSec) -> std::string {
	int hour   = inSec / 3600;
	int minute = (inSec % 3600) / 60;
	int sec    = (inSec % 3600) % 60;

	std::stringstream ss;
	ss << hour << ":" << minute << ":" << sec;
	return ss.str();
}

auto main() -> int {
	int sec;
	std::cin >> sec;
	std::cout << toTimeFormat(sec) << std::endl;
}
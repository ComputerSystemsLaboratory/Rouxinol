#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	int w,h,x,y,r;
	std::string answer;

	std::cin >> w >> h >> x >> y >> r;

	// ???
	if ((y + r) > h) {
		answer = "No";
	}
	// ???
	else if ((y - r) < 0) {
		answer = "No";
	}
	// ???
	else if ((x + r) > w) {
		answer = "No";
	}
	// ???
	else if ((x - r) < 0) {
		answer = "No";
	}
	else {
		answer = "Yes";
	}
	std::cout << answer << std::endl;

	return 0;
}
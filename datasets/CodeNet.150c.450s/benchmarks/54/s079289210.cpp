#include <algorithm>
#include <ctype.h>
#include <iostream>
#include <string>

int main(int argc, char const* argv[])
{
	std::string w, t;

	int found = 0;
	int pos = 0;

	std::cin >> w;
	std::transform (w.begin(), w.end(), w.begin(), toupper);
	while (std::cin >> t)
	{
		if(t == "END_OF_TEXT")
			break;
		std::transform (t.begin(), t.end(), t.begin(), toupper);
		if (t.compare(w) == 0)
			found++;
	}

	std::cout << found << std::endl;
	return 0;
}
#include "iostream"
#include "string"


int main()
{
	int n, tscore = 0, hscore = 0;
	std::string tcard, hcard;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> tcard >> hcard;
		if (tcard == hcard) {
			hscore++;
			tscore++;
		}
		else if (tcard < hcard)
			hscore += 3;
		else
			tscore += 3;
	}
	std::cout << tscore << " " << hscore << std::endl;
    return 0;
}
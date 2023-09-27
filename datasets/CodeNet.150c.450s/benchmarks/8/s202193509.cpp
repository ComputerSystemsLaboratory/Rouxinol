#include <iostream>
#include <string>
#include <vector>

static bool Input(std::vector<std::string> &t, std::vector<std::string> &h, int &n)
{
	if (0x00 == &t || 0x00 == &h || 0x00 == &n) {
		return false;
	}

	n = 0;
	std::cin >> n;
	if (1000 < n) {
		return false;
	}

	t.resize(n);
	h.resize(n);

	for (int i = 0; i < n; i++) {
		std::cin >> t[i] >> h[i];
		if (100 < t[i].size() || 100 < h[i].size()) {
			return false;
		}
	}

	return true;

}

static bool calcScore(const std::vector<std::string> t, const std::vector<std::string> h, const int n, int &taro, int &hanako)
{
	if (0x00 == &taro || 0x00 == &hanako) {
		return false;
	}

	taro = 0;
	hanako = 0;

	for (int i = 0; i < n; i++) {
		if (0 == t[i].compare(h[i])) {
			taro += 1;
			hanako += 1;
		} else if (0 < t[i].compare(h[i])) {
			taro += 3;
		} else {
			hanako += 3;
		}
	}

	return true;
}
int main()
{
	int n = 0;
	int taro = 0, hanako = 0;
	std::vector<std::string> t, h;

	if (true == Input(t, h, n)) {
		(void) calcScore(t, h, n, taro, hanako);
		std::cout << taro << " " << hanako << std::endl;
	}

	return (0);
}
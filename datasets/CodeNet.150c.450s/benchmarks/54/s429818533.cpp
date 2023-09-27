#include <iostream>
#include <algorithm>
#include <string>

static bool Input(std::string &W, std::string &T)
{
	if (0x00 == &W || 0x00 == &T) {
		return false;
	}

	std::getline(std::cin, W);
	if (0 >= W.size() || 10 < W.size()) {
		return false;
	}

	std::string tmp;
	while (true) {
		std::getline(std::cin, tmp);
		if (0 >= tmp.size() || 1000 < T.size()) {
			return false;
		}
		if (0 == tmp.compare("END_OF_TEXT")) {
			break;
		}
		T.append(tmp + "\n");
	}

	transform(W.begin(), W.end(), W.begin(), tolower);
	transform(T.begin(), T.end(), T.begin(), tolower);

	return true;


}

static bool countSameWord(const std::string W, const std::string T, int &num)
{
	std::string new_str(T);
	std::string keyWord;
	int spos = 0;
	int epos = 0;

	num = 0;

	if (0x00 == &num) {
		return false;
	}

	while (true) {
		if (0 > epos) {
			break;
		}
		epos = new_str.find_first_of(" \n", spos);
		keyWord = new_str.substr(spos, epos - spos);
		if (0 == keyWord.compare(W)) {
			num++;
		}
		spos = epos + 1;
	}

	if (0 < num) {
		return true;
	}

	return false;

}
int main()
{
	std::string W, T;
	int num = 0;

	if (true == Input(W, T)) {
		if (true == countSameWord(W, T, num)) {
			std::cout << num << std::endl;
		}
	}

	return (0);
}
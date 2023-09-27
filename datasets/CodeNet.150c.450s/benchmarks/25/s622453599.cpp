#include <iostream>
#include <string>

enum {
	A,
	B,
	C,
	D,
	E,
	F,
	G,
	H,
	I,
	J,
	K,
	L,
	M,
	N,
	O,
	P,
	Q,
	R,
	S,
	T,
	U,
	V,
	W,
	X,
	Y,
	Z
};

int main(int argc, char const* argv[])
{
	std::string str;
	int count[26] = {};
	char ch[27] = "abcdefghijklmnopqrstuvwxyz";

	while(std::cin >> str)
		for (size_t i = 0; i < str.size(); i++)
			count[std::toupper(str[i]) - 'A'] += 1;

	for (size_t j = 0; j < 26; j++)
		std::cout << ch[j] << " : " << count[j] << std::endl;

	return 0;
}
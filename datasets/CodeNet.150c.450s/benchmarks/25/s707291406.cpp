#include <iostream>

int main()
{
	char c;
	int n[26] {};
	while (std::cin >> c) {
		if ('A'<=c && c<='Z') ++n[c-'A'];
		else if ('a'<=c && c<='z') ++n[c-'a'];
	}
	for (int i=0; i!=26; ++i)
		std::cout << char('a'+i) << " : " << n[i] << '\n';
}
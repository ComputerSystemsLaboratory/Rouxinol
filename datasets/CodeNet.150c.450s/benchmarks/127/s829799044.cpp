#include <iostream>
#include <string>
#include <set>

std::string reverse( std::string str ) {
	std::string buf = str;

	for ( int i = 0; i < str.size(); ++i ) {
		buf[i] = str[str.size() - 1 - i];
	}
	return buf;
}

int main()
{
	int m;
	std::cin >> m;

	for ( int i = 0; i < m; ++i ) {
		std::set<std::string> s;
		std::string str;

		std::cin >> str;
		for ( int j = 0; j < str.size()-1; ++j ) {
			std::string buf1 = str.substr(0, j+1);
			std::string buf2 = str.substr(j+1, str.size() - j - 1);

			s.insert(buf1 + buf2);
			s.insert(buf2 + buf1);

			s.insert(reverse(buf1) + buf2);
			s.insert(reverse(buf2) + buf1);

			s.insert(buf1 + reverse(buf2));
			s.insert(buf2 + reverse(buf1));

			s.insert(reverse(buf1) + reverse(buf2));
			s.insert(reverse(buf2) + reverse(buf1));
		}
		std::cout << s.size() << std::endl;
	}

	return 0;
}
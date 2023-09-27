# include <iostream>
# include <string>

int ch2i(char ch) {
	int n = 0;
	switch (ch) {
	case'1':
		n += 1;
		break;
	case'2':
		n += 2;
		break;
	case'3':
		n += 3;
		break;
	case'4':
		n += 4;
		break;
	case'5':
		n += 5;
		break;
	case'6':
		n += 6;
		break;
	case'7':
		n += 7;
		break;
	case'8':
		n += 8;
		break;
	case'9':
		n += 9;
		break;
	}
	return n;
}


int main() {
	std::string input;
	while (std::cin >> input) {
		if (input == "0")
			break;
		int sum = 0;
		for (std::string::iterator i = input.begin(); i != input.end(); ++i) {
			sum += ch2i(*i);
		}
		std::cout << sum << std::endl;
	}
	return 0;
}
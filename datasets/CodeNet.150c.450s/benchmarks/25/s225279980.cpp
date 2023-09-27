#include "iostream"
#include "string"
#include "cctype"

int main()
{
	char a;
	std::string str, temp;
	int i = 0, sum = 0;
	int ABC[26] = { 0 };

	while (!std::cin.eof()) {
		getline(std::cin, temp);
		str += temp;
	}
		for (int i = 0; i < str.length(); i++)
			if (isupper(str[i]))
				str[i] = tolower(str[i]);
		for (int i = 0; i < str.length(); i++)
			for (int j = 0; j < 26; j++)
				if (str[i] == 'a' + j)
					ABC[j]++;

	for (int j = 0; j < 26; j++) {
		a = 'a' + j;
		std::cout << a << " : " << ABC[j] << std::endl;
	}

	return 0;
}
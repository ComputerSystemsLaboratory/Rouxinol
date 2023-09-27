#include <iostream>
#include <string>
using namespace std;

#define A

#ifdef A
int main(void) {


	string str;

	getline(cin, str);
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] > 0x40 && str[i] < 0x5b)
		{
			cout << static_cast<char>(str[i] + 0x20);
		}
		else if (str[i] > 0x60 && str[i] < 0x7b)
		{
			cout << static_cast<char>(str[i] - 0x20);

		}
		else 
			cout << str[i];
	}
	cout << endl;
	return 0;
}
#endif // A
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define C

#ifdef C

int main(void) {
	int num[30] = {};
	string str;
	while(getline(cin, str))
	{
	for (size_t i = 0; i < str.size(); i++)
	{
		str[i] -= 0x41;
		if (str[i] < 0)
			continue;
		else if (str[i] > 0x1f)
			str[i] -= 0x20;
		num[str[i]]++;

	}
}
	for (size_t i = 0; i < 0x1A; i++)
	{

		cout << static_cast<char>(i + 0x61) << " : " << num[i] << endl;

	}


	return 0;
}
#endif // C
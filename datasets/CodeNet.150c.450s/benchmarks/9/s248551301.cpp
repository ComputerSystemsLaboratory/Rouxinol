#include <string.h>
#include <ctype.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char str[200 + 1] = { 0 };
	char backup[200 + 1] = { 0 };
	int str_len = 0;
	int shuffle_times = 0;
	int shuffle = 0;

	while (true)
	{
		cin >> str;
		if (str[0] == '-' && str[1] == '\0') break;
		str_len = strlen(str);
		cin >> shuffle_times;
		for (int i = 0; i < shuffle_times; i++) {
			cin >> shuffle;
			for (int j = 0; j < shuffle; j++) {
				backup[j] = str[j];
			}
			backup[shuffle] = '\0';
			for (int j = 0; j < str_len - shuffle; j++) {
				str[j] = str[j + shuffle];
			}
			for (int j = 0; j < str_len; j++) {
				str[j + str_len - shuffle] = backup[j];
			}
			str[str_len] = '\0';
		}
		cout << str << endl;
	}
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define B

#ifdef B

int main(void)
{
	int sum;
		string str;
		vector<int> ans;
	while (true)
	{
		getline(cin, str);
		if (atoi(str.c_str()) == 0)
			break;
		sum = 0;
		for (size_t i = 0; i < str.size(); i++)
		{
			sum += str[i] - 0x30;
		}
		ans.push_back(sum);
	}
	for (auto a : ans) {
		cout << a << endl;
	}
	return 0;
}
#endif // B
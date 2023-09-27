#include <iostream>
#include <string>
#include <list>
using namespace std;


#define B

#ifdef B
int main(void)
{
	list<string> arr;

	string in;
	cin >> in;
	while (in != "-")
	{
		int n;
		cin >> n;
		for (size_t i = 0; i < n; i++)
		{
			int h;
			cin >> h;
			in = in.substr(h, -1) + in.substr(0, h);
		}
		arr.push_back(in);
		cin >> in;
	}
	for (auto a : arr) {
		cout << a << endl;
	}
	return 0;
}
#endif
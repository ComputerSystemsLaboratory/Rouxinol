#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, it = 0, ih = 0;
	string taro, hanako;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> taro >> hanako;
		if(taro.compare(hanako) < 0)
			ih+=3;
		else if(taro.compare(hanako) > 0)
			it+=3;
		else
		{
			++it;
			++ih;
		}
	}
	cout << it << " " << ih << endl;
	return 0;
}
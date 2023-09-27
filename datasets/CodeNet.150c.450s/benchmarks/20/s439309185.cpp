#include <iostream>
using namespace std;

int main(void)
{
	int in;
	int tmp;

	cin >> in;
	tmp = in % 3600;
	cout << in/3600 << ":" << tmp/60 << ":" << tmp%60 << endl;

	return 0;
}

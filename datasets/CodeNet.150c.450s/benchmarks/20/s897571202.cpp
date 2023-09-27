#include <iostream>
using namespace std;

int main(void)
{
	int in;
	int zi, hun;

	cin >> in;

	zi = in / 3600;
	in -= (zi*3600);

	hun = in / 60;
	in -= (hun*60);

	cout << zi << ":" << hun << ":" << in << endl;

	return 0;
}

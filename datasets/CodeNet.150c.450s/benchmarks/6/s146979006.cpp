#include <iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

bool maxor(int x, int y, int z)
{
	return (x < y) ? ((y < z) ? TRUE : FALSE) : FALSE;
}

int main()
{
	int x = 0, y = 0, z = 0;
	cin >> x >> y >> z;
	if (maxor(x, y, z)){
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	return 0;
}
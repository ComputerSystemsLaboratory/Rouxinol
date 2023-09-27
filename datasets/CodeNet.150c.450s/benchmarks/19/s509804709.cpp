#include <iostream>
#include <cstdio>

using namespace std;




int main()
{
	int x, y;
	
	while (1)
	{
		cin >> x >> y;
		if (x==0 && y==0) return 0;
		if (x < y) cout << x << " " << y << "\n";
		else cout << y << " " << x << "\n";
	}
	
	return 0;
}
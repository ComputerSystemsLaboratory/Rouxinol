#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x[2];

	while (1){
		cin >> x[0] >> x[1];
		if (x[0] == 0 && x[1] == 0) break;
		sort (x, x + 2);
		cout << x[0] << " " << x[1] << endl;
	}
	return(0);
}
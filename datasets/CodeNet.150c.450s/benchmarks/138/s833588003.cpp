#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
	int tmp, x, y;
	cin >> x >> y;
	while (true){
		if (x < y){
			tmp = x;
			x = y;
			y = tmp;
		}
		if (x % y == 0){
			cout << y << endl;
			break;
		}
		else{
			x = x % y;
		}
	}
	

	return 0;
}
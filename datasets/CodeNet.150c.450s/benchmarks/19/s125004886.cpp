// 2014/07/15 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int x, y;
		cin >> x >> y;

		if(x==0 && y==0)
			break;

		if(x<y){
			cout << x << ' ' << y << '\n';
		}
		else{
			cout << y << ' ' << x << '\n';
		}
	}

	return 0;
}
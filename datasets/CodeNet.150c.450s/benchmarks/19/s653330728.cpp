#include<iostream>
#include <algorithm>
using namespace std;



int main()
{
	int x, y;
	while (cin >> x >> y){
		if (x == 0 && y == 0){
			break;
		}
		cout << min(x, y) <<" "<< max(x, y)<< endl;
	}

	return 0;
}
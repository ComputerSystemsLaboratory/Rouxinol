#include<iostream>
#include<utility>

using namespace std;

int main(){
	int x, y, i, k;

	cin >> x >> y;
	if(x < y) swap(x, y);
	do{
		k = x % y;
		x = y;
		y = k;
	}while(k != 0);
	cout << x << endl;

	return 0;
}
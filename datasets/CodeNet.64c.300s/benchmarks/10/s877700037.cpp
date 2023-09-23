#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int c = 0;
	int x[3000];
	int y[3000];
	cin >> a;
	cin >> b;
	for ( int i = 0; a != 0 || b != 0; i++){
		x[i] = a;
		y[i] = b;
		cin >> a;
		cin >> b;
		c++;
	}
	for (int i = 0; i < c; i++){
		if(x[i] > y[i]) swap(x[i], y[i]);
	}
	
	for ( int i = 0; i < c; i++){
		cout << x[i] << " " << y[i] << endl;
	}
	return 0;
}

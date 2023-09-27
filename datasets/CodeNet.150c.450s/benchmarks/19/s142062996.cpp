#include<iostream>

using namespace std;

void smaller(int *x, int *y);

int main(void)
{
	int x, y;
	while(1){
		cin >> x >> y;
		
		if(x == 0 && y == 0)
		break;
		
		smaller(&x, &y);
		cout << x << ' ' << y << endl;
	}
	return 0;
}

void smaller(int *x, int *y){
	if(*x > *y){
		int type = *x;
		*x = *y;
		*y = type;
	}
}
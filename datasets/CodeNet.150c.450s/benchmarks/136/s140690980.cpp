#include <iostream>
using namespace std;

int yaku(int x, int y);
int bai(int n, int m);

int main(void){

	int n, m;
	while (cin >> n >> m){
	
		int gcd; //?????§??¬?´???°
		int lcm; //????°???¬?????°

		gcd = yaku(n, m);
		lcm = bai(n, m);

		cout << gcd << ' ' << lcm << endl;
	}
}

int yaku(int x, int y){

	if (x < y){
		int temp = x;
		x = y;
		y = temp;
	}

	while (y != 0){
		int temp = x % y;
		x = y;
		y = temp;
	}

	return x;
}

int bai(int n, int m){

	int x = n, y = m;

	while (x != y){
		if (x < y)
			x = x + n;
		else
			y = y + m;
	}

	return x;
}
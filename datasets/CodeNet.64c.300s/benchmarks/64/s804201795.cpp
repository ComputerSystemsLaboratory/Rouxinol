
#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
using namespace std;

int GCD(int x,int y){
	if( y == 0){
		return x;
	}
	return GCD(y, x % y);
}


int main()
{
	int x , y;
	cin >> x >> y;
	if ( x < y ){
		int temp = x;
		x = y;
		y = temp;
	}
	cout << GCD(x,y) <<endl;
	return 0;
}


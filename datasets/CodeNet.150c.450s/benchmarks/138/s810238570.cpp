//#define _USE_MATH_DEFINES // for C++
//#include <cmath>
#include <stdio.h>
//#include <vector>

using namespace std;

int gcd(int x, int y){

	int a, b, c;
	int ans;


	if (x >= y){
		a = x;
		b = y;
	}
	else{
		a = y;
		b = x;
	}

	c = a % b;
	if (c == 0){
		ans = b;
	}
	else{
		ans = gcd(b, c);
	}

	return ans;

}


int main(){
	
	int x, y;

	scanf("%d %d", &x, &y);

	printf("%d\n", gcd(x, y));

	return 0;
}
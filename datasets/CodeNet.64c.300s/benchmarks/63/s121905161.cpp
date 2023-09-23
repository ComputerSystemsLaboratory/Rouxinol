#include <cstdio>
using namespace std;

int euclid(int b, int c){
	int a;
	while (c != 0){
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int main(){
	int a, b, g, l;
	while (scanf("%d %d", &a, &b) != EOF){
		g = euclid(a, b);
		l = a / g * b;
		printf("%d %d\n", g, l);
	}
	return 0;
}
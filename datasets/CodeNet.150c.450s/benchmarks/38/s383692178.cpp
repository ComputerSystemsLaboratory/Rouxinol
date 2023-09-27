#include <iostream>

bool checkTriangle(int a, int b, int c)
{
	if((a >= b) && (a >= c)) {
		return (a*a == (b*b + c*c));
	} else if((b >= a) && (b >= c)) {
		return (b*b == (a*a + c*c));
	} else {
		return (c*c == (a*a + b*b));
	}
}

int showResult(int a, int b, int c)
{
	if(checkTriangle(a,b,c)) {
		std::cout << "YES" << std::endl;
	} else {
		std::cout << "NO" << std::endl;
	}
	return 0;
}
	
int main()
{
	int N, a, b, c = 0;
	std::cin >> N;
	
	if(N == 0) {
		return 0;
	}
	for(int i = 0; i < N; i++) {
		std::cin >> a >> b >> c;
		showResult(a, b, c);
	}
	return 0;	
}
#include <iostream>


int f(int a, int b,int c)
{
	if (a * a == b * b + c * c) {
		return 1;
	} else if (b * b == c * c + a * a) {
		return 1;
	} else if (c * c == a * a + b * b) {
		return 1;
	} else {
		return 0;
	}
}
int main()
{
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
	    int a;
	    int b;
	    int c;
	    std::cin >> a >> b >> c;
	    if (f(a, b, c) == 1) {
		    std::cout << "YES" << std::endl;
	    } else {
		    std::cout << "NO" << std::endl;
		}
	}
	return 0;
}
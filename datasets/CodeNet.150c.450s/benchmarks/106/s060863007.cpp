#include <iostream>

int main(int argc, char const *argv[])
{
	int a, b, c, answer;
	
	answer = 0;
	std::cin >> a >> b >> c;
	for (int i = a;i <= b;i++) {
		if ((c % i) == 0) {
			answer++;
		}
	}
	std::cout << answer << std::endl;
	
	return 0;
}
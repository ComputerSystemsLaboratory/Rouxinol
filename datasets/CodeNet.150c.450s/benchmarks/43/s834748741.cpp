#include<iostream>
int main() {
	int vec=0;
	int n;
	int a=0;
	int b=0;
	int game_a, game_b;
	while (1) {
		std::cin >> n;
		if (n == 0)break;
		else {
			for (int i = 0; i < n; ++i) {
				std::cin >> game_a>>game_b;
				if (game_a == game_b) { a += game_a; b += game_b; }
				else if (game_a > game_b)a += game_a + game_b;
				else b += game_a + game_b;
			}
			std::cout << a << " " << b << std::endl; a = 0; b = 0;
		}
	}
	return 0;
}
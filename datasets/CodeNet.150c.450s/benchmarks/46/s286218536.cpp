# include <iostream>

int main() {

	while (true) {
		int n, x;
		std::cin >> n >> x;
		if (n == 0 && x == 0)
			break;
		int cnt = 0;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j < i; j++)
				for (int k = 1; k < j; k++)
					if (i + j + k == x) 
						cnt++;

		std::cout << cnt << std::endl;
	}

	return 0;
}
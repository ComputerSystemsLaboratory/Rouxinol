#include<iostream>

int main(){

	while (true){
		int n, base, p;
		int cnt[51] = { 0 };

		std::cin >> n >> base;

		if (n == 0 && base == 0)break;

		p = base;

		int i = 0;
		while (true){
			if (i == n)i = 0;

			if (p == 0){
				p += cnt[i];
				cnt[i] = 0;
			}
			else {
				p--;
				cnt[i]++;
				if (cnt[i] == base)break;
			}

			i++;
		}

		std::cout << i << std::endl;
	}

	return 0;
}
#include<iostream>

int main()
{
	int a, b, c;
	int i;
	int ans = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	for (i = a; i <= b; i++){
		if (c % i == 0){
			ans++;
		}
	}
	std::cout << ans << '\n';
}
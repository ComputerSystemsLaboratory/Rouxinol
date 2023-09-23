#include<iostream>
int num[10];
int f(int a,int b ,int c) {
	int flag = 0;
	if (a == 9)
		flag = 1;
	if (a == 0)
		return f(1, num[a], 0);
	else if (num[a] > b) {
		if (flag == 1)
			return 1;
		if (num[a] > c)
			return f(a + 1, num[a], c) + f(a + 1, b, num[a]);
		else
			return f(a + 1, num[a], c);
	}
	else if (num[a] > c) {
		if (flag == 1)
			return 1;
		return  f(a + 1, b, num[a]);
	}
	else
		return 0;
}
int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i += 1) {
		int N[10];
		for (int i = 0; i < 10; i += 1) {
			std::cin >> N[i];
			num[i] = N[i];
		}
		if (f(0, 0, 0) > 0)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}
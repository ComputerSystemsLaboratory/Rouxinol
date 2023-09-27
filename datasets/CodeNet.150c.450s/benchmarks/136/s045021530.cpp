#include<iostream>

void swap(int&, int&);
int gcd(int, int);

int main()
{
	int a, b, g, l, a_cpy;
	while (std::cin >> a >> b)
	{
		g = gcd(a, b);
		l = a / g * b;
		std::cout << g << " " << l << std::endl;
	}

	return 0;
}

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;

	return;
}

int gcd(int a, int b)
{
	if (a > b)
		swap(a, b);
	while (a > 0)
	{
		b %= a;
		swap(a, b);
	}
	return b;
}

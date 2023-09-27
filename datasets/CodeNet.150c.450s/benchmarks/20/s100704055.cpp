#include <iostream>

void print(int S);

int main()
{
	int S;
	std::cin >> S;

	print(S);
	
	return 0;
}

#include <cstdio>

void print(int S)
{
	int h, m, s;

	s = S % 60;
	m = (S / 60) % 60;
	h = (S / 60) / 60;

	std::printf("%d:%d:%d\n", h, m, s);
}
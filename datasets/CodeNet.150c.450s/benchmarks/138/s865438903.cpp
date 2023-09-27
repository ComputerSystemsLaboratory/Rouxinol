//	-*- mode: C++ -*-
//	Greatest Common Divisor
//		Write a program which finds the greatest common divisor of two natural numbers a and b
//
//	Input
//		a and b are given in a line sparated by a single space.
//
//	Output
//		Output the greatest common divisor of a and b.
//
//	Constrants
//		1 ≤ a, b ≤ 109
//
//	Hint
//		You can use the following observation:
//
//		For integers x and y, if x ≥ y, then gcd(x, y) = gcd(y, x%y)
//
//	Sample Input 1
//		54 20
//	Sample Output 1
//		2
//	Sample Input 2
//		147 105
//	Sample Output 2
//		21

#include <iostream>

int	main(int	argc,
		 char*	argv[])
{
	unsigned long long	a	{0};
	unsigned long long	b	{0};

	std::cin >> a >> b;

	if(a < b){
		auto tmp	= a;
		a			= b;
		b			= tmp;
	}

	// ユークリッドの互除法
	unsigned int	r	= a % b;
	while(r != 0){
		a = b;
		b = r;
		r = a % b;
	}

	std::cout << b << '\n';

    return 0;
}


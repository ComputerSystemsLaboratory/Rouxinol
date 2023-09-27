#include <iostream>

int A[10000], B[10000];

int main()
{
	int n, a, b;
	std::cin >> n;
	while (n != 0)
	{
		a = 0; 
		b = 0;
		for (int i = 0; i < n; i++)
		{
			std::cin >> A[i] >> B[i];
			if (A[i] > B[i])
			{
				a += A[i] + B[i];
			}
			if (A[i] == B[i])
			{
				a += A[i];
				b += B[i];
			}
			if (A[i] < B[i])
			{
				b += A[i] + B[i];
			}
		}
		std::cout << a << " " << b << std::endl;
		std::cin >> n;
	}
    return 0;
}
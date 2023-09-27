#include <iostream>

using namespace std;
static const int N = 100;

int main(void)
{
	int M[N][N];
	int n, u, k, v;

	std::cin >> n;
	
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			M[i][j] = 0;
		}
	}

	for(int i = 0; i < n; ++i)
	{
		std::cin >> u >> k;
		u--;

		for(int j = 0; j < k; ++j)
		{
			std::cin >> v;
		    v--;
			M[u][v] = 1;	
		}
	}

	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			if( j != 0 ) std::cout << " "; 
			std::cout << M[i][j];
		}
		
		std::cout << std::endl;
	}

	return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>

#define EPS	1.0e-10
#define MAX_CRYSTAL	32
#define rep(idx, max)	for(int idx = 0, idx##Max = max; idx < idx##Max; idx ++)

typedef std::vector<int>	VEC;

void	GetPrime(VEC &bIsPrime, int n)
{
	bIsPrime.resize(n);
	
	for(int i = 0; i < n; i ++)	{	bIsPrime[i]	= (i & 0x01);	}
	bIsPrime[1]	= false;
	bIsPrime[2]	= true;
	for(int i = 2; i * i < n; i ++)
	{
		if(!bIsPrime[i])	{	continue;	}
		for(int j = i * i; j < n; j += i)	{	bIsPrime[j] = false;	}
	}

//	dst.clear();
//	dst.reserve(n >> 1);
//	for(int i = 0; i < n; i ++)
//	{	if(bIsPrime[i])	{	dst.push_back(i);	}	}
}

int main(int nArgs, char **lplpszArgs)
{
	int a, d;
	int n;
	VEC	bIsPrime;
	VEC	seq;
	
	::GetPrime(bIsPrime, 1e+6);
	
	while (std::cin >>a >> d >> n, n)
	{
		int prime, count = 0;
		for(int i = 0; ; i ++)
		{
			if(bIsPrime[a + d * i])
			{
				prime = a + d * i;
				if(++ count == n)	{	break;	}
			}
		}
		
		std::cout << prime << std::endl;
	}
}
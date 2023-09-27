// AOJ 2440 (http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2440)
#include<iostream>
#include<set>
#include<string>
#define rep(i,a) for(int i=0;i<(a);++i)

int N, M;
std::set<std::string> s;
bool key = true;

int main()
{
	std::cin >> N;
	rep( i, N )
	{
		std::string U;
		std::cin >> U;

		s.insert(U);
	}

	std::cin >> M;
	rep( i, M )
	{
		std::string T;
		std::cin >> T;
			
		if( s.count(T) )
		{
			key ^= true;
			std::cout << (key?"Closed by ":"Opened by ");
		}
		else
			std::cout << "Unknown ";

		std::cout << T << std::endl;
	}

	return 0;
}
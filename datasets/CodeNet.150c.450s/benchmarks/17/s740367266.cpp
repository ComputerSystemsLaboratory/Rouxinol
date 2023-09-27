#include <array>
#include <algorithm>
#include <functional>
#include <iostream>

int main()
{
	std::array<int,5> v;
	std::cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4];
	std::sort( v.begin(), v.end(), std::greater<int>() );
	std::cout << v[0] << ' ' << v[1] << ' ' << v[2] << ' ' << v[3] << ' ' << v[4] << '\n';
}
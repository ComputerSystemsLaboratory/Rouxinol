#include<iostream>
#include<algorithm>

int main()
{
	int j1, m1, s1, e1;
	std::cin >> j1 >> m1 >> s1 >> e1;
	int s = j1 + m1 + s1 + e1;

	int j2, m2, s2, e2;
	std::cin >> j2 >> m2 >> s2 >> e2;
	int t = j2 + m2 + s2 + e2;

	std::cout << std::max(s, t) << std::endl;

	return 0;
}
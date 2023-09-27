#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec1, vec2, vec3;
	int n, a, b, c;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a >> b >> c;
		vec1.push_back(a), vec2.push_back(b), vec3.push_back(c);
	}
	for (int i = 0; i < n; ++i)
	{
		if ((vec1[i] * vec1[i] + vec2[i] * vec2[i] == vec3[i] * vec3[i]) 
			|| (vec2[i] * vec2[i] + vec3[i] * vec3[i] == vec1[i] * vec1[i])
			|| (vec1[i] * vec1[i] + vec3[i] * vec3[i] == vec2[i] * vec2[i]))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}

	return 0;
}
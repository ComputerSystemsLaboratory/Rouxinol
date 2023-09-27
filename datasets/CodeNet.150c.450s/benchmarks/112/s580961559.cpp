#include <iostream>
#include <vector>

typedef struct {
	char before;
	char after;
}Change;

int main()
{
	int n, m;
	std::vector<Change> vec;
	char temp1, temp2;
	std::vector<char> ans;
	std::vector<std::vector<char>> answer;


	while (1) {
		std::cin >> n;

		if (n == 0) {
			break;
		}

		vec.clear();
		for (int i = 0; i < n; i++)
		{
			std::cin >> temp1 >> temp2;
			Change temp = { temp1,temp2 };
			vec.push_back(temp);
		}

		std::cin >> m;

		ans.clear();
		for (int i = 0; i < m; i++)
		{
			std::cin >> temp1;
			for (unsigned int j = 0; j < vec.size(); j++) {
				if (vec[j].before == temp1) {
					temp1 = vec[j].after;
					break;
				}
			}
			ans.push_back(temp1);
		}
		answer.push_back(ans);
	}

	for (unsigned int i = 0; i < answer.size(); i++)
	{
		for (unsigned int j = 0; j < answer[i].size(); j++)
		{
			std::cout << answer[i][j];
		}
		std::cout << std::endl;
	}
	
	return 0;
}
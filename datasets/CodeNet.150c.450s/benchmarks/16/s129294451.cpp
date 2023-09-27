#include <iostream>
#include <vector>

int min(int x, int y)
{
	return x>y ? y : x;
}

int main()
{
	std::string str;
	getline(std::cin, str);
	
	int length = str.size();
	int height[20001];
	height[0] = 0;
	for (int i=1; i<=length; i++) {
		if (str[i-1] == '\\') height[i] = height[i-1] - 1;
		else if (str[i-1] == '/') height[i] = height[i-1] + 1;
		else height[i] = height[i-1];
	}
	
	// for (int i=0; i<=length; i++) std::cout << height[i] << " ";
	// std::cout << std::endl;
	
	int left_max[20001];
	int right_max[20001];
	int height_of_hull[20001];
	
	left_max[0] = height[0];
	for (int i=1; i<=length; i++) {
		if (height[i] > left_max[i-1]) left_max[i] = height[i];
		else left_max[i] = left_max[i-1];
	}
	
	right_max[length] = height[length];
	for (int i=length-1; i>=0; i--) {
		if (height[i] > right_max[i+1]) right_max[i] = height[i];
		else right_max[i] = right_max[i+1];
	}
	
	for (int i=0; i<=length; i++) {
		height_of_hull[i] = min(left_max[i], right_max[i]);
	}
	
	std::vector<int> areas;
	int area = 0;
	bool flood = false;
	for (int i=1; i<=length; i++) {
		if (flood) {
			if (height[i-1] - 1 == height[i]) area += 2 * (height_of_hull[i] - height[i]) - 1;
			else if (height[i-1] == height[i]) area += 2 * (height_of_hull[i] - height[i]);
			else {
				if (height_of_hull[i] > height[i]) area += 2 * (height_of_hull[i] - height[i]) + 1;
				else {
					areas.push_back((area+1)/2);
					area = 0;
					flood = false;
				}
			}
		}
		else { // !flood
			if (height_of_hull[i] > height[i]) {
				flood = true;
				area = 1;
			}
		}
	}
	
	int sum_of_areas = 0;
	for (std::vector<int>::iterator it = areas.begin(); it != areas.end(); ++it) sum_of_areas += *it;
	std::cout << sum_of_areas << std::endl;
	
	std::cout << areas.size();
	for (std::vector<int>::iterator it = areas.begin(); it != areas.end(); ++it) {
		std::cout << " " << *it;
	}
	std::cout << std::endl;
	
	return 0;
}



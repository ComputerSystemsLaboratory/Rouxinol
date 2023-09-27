#include<iostream>
#include<cmath>
#include<string>

int main(int, char**)
{
	std::string a_str, b_str;
	std::cin >> a_str >> b_str;

	int a = std::stoi(a_str);
	int b = std::stoi(b_str);

	std::cout << (a * b) << " " << (2 * a + 2 * b) << std::endl;
}

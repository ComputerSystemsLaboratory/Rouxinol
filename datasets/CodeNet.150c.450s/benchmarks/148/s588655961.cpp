#include <iostream>
#include <string>
#include <cstdint>
#include <bitset>
#include <vector>
#include <thread>
#include <stack>
#include <map>



int main()
{
	int n;
	std::cin >> n;
	std::string s;
	std::map<std::string, int>mp;
	for (int i = 0; i < n; i++)
	{
		std::cin >> s;
		mp[s]++;
	}

	printf("AC x %d\n", mp["AC"]);
	printf("WA x %d\n", mp["WA"]);
	printf("TLE x %d\n", mp["TLE"]);
	printf("RE x %d\n", mp["RE"]);
}
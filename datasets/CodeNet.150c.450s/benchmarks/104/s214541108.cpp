
#include <iostream>
#include <vector>
#include <algorithm>

typedef std::pair<int, int> swap_command;

int w, n;
std::vector<int> vertical;
std::vector<swap_command> commands;

swap_command get_command_input()
{
	swap_command cmd;
	char dummy;
	std::cin >> cmd.first >> dummy >> cmd.second;
	return cmd;
}

void init()
{
	std::cin >> w;
	std::cin >> n;

//	std::cout << w << " " << n << std::endl;

	int i;
	for (i = 0; i < w; i++) {
		vertical.push_back(i+1);
	}

	for (i = 0; i < n; i++) {
		commands.push_back(get_command_input());
	}
}

void dump_vertical()
{
	std::cout << "vertical: ";
	for (int i = 0; i < w; i++) {
		std::cout << vertical[i] << ' ';
	}
	std::cout << std::endl;
}

void swap(swap_command cmd)
{
//	std::cout << "fist: " << cmd.first << " second: " << cmd.second << std::endl;
	int i = cmd.first-1;
	int j = cmd.second-1;
	int tmp = vertical[i];
	vertical[i] = vertical[j];
	vertical[j] = tmp;
//	dump_vertical();
}

void solve()
{
	for (std::vector<swap_command>::iterator i = commands.begin(); i != commands.end(); i++) {
		swap(*i);
	}
}

void output()
{
	for (std::vector<int>::iterator i = vertical.begin(); i != vertical.end(); i++) {
		std::cout << *i << std::endl;
	}
}

int main()
{
	init();
	solve();
	output();
	return 0;
}
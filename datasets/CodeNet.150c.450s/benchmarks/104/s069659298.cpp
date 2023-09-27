#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void input();
void calc();
void output();

int main(void)
{

	input();
	calc();
	output();
}


int n,m;
std::vector<int> line;

void set_line()
{
	for (int i = 0; i < n; i++)
	{
		line.push_back(i + 1);
	}
}

void input()
{
	cin >> n >> m;
	set_line();

}

void calc()
{
	int a, b;
	char c;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> c  >> b;
		swap(line[a - 1], line[b - 1]);
	}

}

void output()
{
	for (int i = 0; i < n; i++)
	{
		cout << line[i] << endl;
	}
}
#include <stdio.h>
#include <iostream>
#include <map>

std::map<char,char> hyou;


bool init()
{
	hyou.clear();
	int n;
	std::cin >> n;
	if(n==0)
		return false;
	for(int i=0; i<n; i++)
	{
		char c,d;
		std::cin >> c >> d;
		hyou[c] = d;
	}
	return true;
}

void solve()
{
	char dust[500];
	int n;
	std::cin >> n;
	std::cin.getline(dust,sizeof(dust));
	for(int i=0; i<n; i++)
	{
		char out;
		out = (char)getchar();
		if(hyou.find(out) != hyou.end())
			out = hyou[out];
		putchar((int)out);
		std::cin.getline(dust,sizeof(dust));
	}
	std::cout << std::endl;

	return;
}

int main(void) {
	while(init())
		solve();
	return 0;
}
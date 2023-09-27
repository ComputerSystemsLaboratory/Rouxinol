#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <deque>
#include <stack>
#include <algorithm>
#include <memory.h>

#define rep(idx, max)			for(int idx = 0, idx##Max = (max); idx < idx##Max; idx ++)
#define rrep(idx, min, max)	for(int idx = (min), idx##Max = max; idx < idx##Max; idx ++)
#define erep(idx, min, max)	for(int idx = (min), idx##Max = max; idx <= idx##Max; idx ++)

#define rev(idx, max)			for(int idx = (max) - 1; idx >= 0; idx --)
#define rrev(idx, min, max)	for(int idx = (max) - 1, idx##Min = (min); idx >= idx##Min; idx --)
#define erev(idx, min, max)	for(int idx = (max), idx##Min = (min); idx >= idx##Min; idx --)

#define foreach(it, obj)	for(auto it = obj.begin(), it##End = obj.end(); it >= it##End; it ++)

typedef struct	_DEC
{
	const char *lpszText;
	int length;
} DEC;

void	Decrypt(std::string &dst, std::string &src)
{
	static DEC decTbl[] =
	{
		{"", 0 + 1},	// +1 for prevent 0-DIV
		{".,!? ", 5}, {"abc", 3}, {"def", 3}, {"ghi", 3},
		{"jkl", 3}, {"mno", 3}, {"pqrs", 4}, {"tuv", 3},
		{"wxyz", 4},
	};
	for(int pos = 0, len = src.size(); pos < len; pos ++)
	{
		int ch, sectlen = pos;
		for(ch = src[pos]; src[pos] != '0'; pos ++);
		sectlen = pos - sectlen - 1;
		if(int idx = ch - '0')
		{	dst += decTbl[idx].lpszText[sectlen % decTbl[idx].length];	}
	}
}

int main()
{
	int tc;
	std::cin >> tc;
	while(tc --)
	{
		std::string decText;
		std::string encText;
		std::cin >> encText;
		::Decrypt(decText, encText);
		std::cout << decText << std::endl;
	}
}
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <numeric>

//#include <map>

using namespace std;

enum suit{
	S, H, C, D,
};

class card{
public:
	char chSuit;
	int iSuit;
	int num;

	card(char c, int n)
	{
		switch (c)
		{
			case 'S':iSuit = S; break;
			case 'H':iSuit = H; break;
			case 'C':iSuit = C; break;
			case 'D':iSuit = D; break;
			default:break;
		}
		chSuit = c;
		num = n;
	}

	card(int c, int n)
	{
		switch (c)
		{
			case S:chSuit = 'S'; break;
			case H:chSuit = 'H'; break;
			case C:chSuit = 'C'; break;
			case D:chSuit = 'D'; break;
			default:break;
		}
		iSuit = n;
		num = n;
	}
};

int main()
{
	int n;
	cin >> n;

	vector<card> vCardExt,vCardMissing;

	for (int i = 0; i < n; i++)
	{
		char suit;
		int num;
		cin >> suit >> num;
		card cd(suit,num);
		vCardExt.push_back(cd);
	}

	for (int i = S; i <= D; i++)
	{
		for (int j = 1; j <= 13; j++)
		{
			bool isExist = false;
			for (int k = 0; k < vCardExt.size(); k++)
			{
				if (vCardExt.at(k).iSuit == i && vCardExt.at(k).num == j)
				{
					isExist = true;
					break;
				}
				else
				{
				}
			}
			if (isExist == false)
			{
				card cd(i, j);
				vCardMissing.push_back(cd);
			}
		}
	}

	for (int i = 0; i < vCardMissing.size(); i++)
	{
		cout << vCardMissing.at(i).chSuit << " " << vCardMissing.at(i).num << endl;
	}

	return 0;
}
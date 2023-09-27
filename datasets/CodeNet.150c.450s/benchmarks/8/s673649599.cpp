#include <iostream>
#include <cstdio>
#include <string>

static const int drawPoint = 1;
static const int winPoint = 3;

enum Result
{
	WINNER_A,
	DRAW,
	WINNER_B,
};

Result game(const std::string a, const std::string b);

int main(void)
{
	int n;
	std::cin >> n;
	int point_a = 0;
	int point_b = 0;
	std::string a, b;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a >> b;
		switch (game(a, b))
		{
		case WINNER_A:
			point_a += winPoint;
			break;
		case DRAW:
			point_a += drawPoint;
			point_b += drawPoint;
			break;
		case WINNER_B:
			point_b += winPoint;
			break;
		default:
			break;
		}
	}
	printf("%d %d\n", point_a, point_b);
	return 0;
}

Result game(const std::string a,const std::string b)
{
	
	if (a[0] > b[0])
	{
		return WINNER_A;
	}
	else if (a[0] < b[0])
	{
		return WINNER_B;
	}
	else
	{
		std::string a_sub, b_sub;
		a_sub = a.substr(1);
		b_sub = b.substr(1);
		if (a_sub.size() > 0 && b_sub.size() == 0)
		{
			return WINNER_A;
		}
		else if (a_sub.size() == 0 && b_sub.size() > 0)
		{
			return WINNER_B;
		}
		else if (a_sub.size() == 0 && b_sub.size() == 0)
		{
			return DRAW;
		}
		else
		{
			return game(a_sub, b_sub);
		}
	}
}
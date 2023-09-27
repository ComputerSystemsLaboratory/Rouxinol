#include <stdio.h>

struct Dice
{
	int n[6];
};

Dice InputDice()
{
	Dice d;
	for(int i = 0; i < 6; ++i)
	{
		scanf("%d", &d.n[i]);
	}
	
	return d;
}

Dice SetDice(int a, int b, int c, int d, int e, int f)
{
	Dice dice;
	dice.n[0] = a;
	dice.n[1] = b;
	dice.n[2] = c;
	dice.n[3] = d;
	dice.n[4] = e;
	dice.n[5] = f;
	
	return dice;
}

Dice Roll(Dice dice, char dir)
{
	switch(dir)
	{
		case 'N':
			return SetDice(dice.n[1], dice.n[5], dice.n[2], dice.n[3], dice.n[0], dice.n[4]);
		case 'S':
			return SetDice(dice.n[4], dice.n[0], dice.n[2], dice.n[3], dice.n[5], dice.n[1]);
		case 'W':
			return SetDice(dice.n[2], dice.n[1], dice.n[5], dice.n[0], dice.n[4], dice.n[3]);
		case 'E':
			return SetDice(dice.n[3], dice.n[1], dice.n[0], dice.n[5], dice.n[4], dice.n[2]);
	}
}

bool IsSame(Dice a, Dice b)
{
	for(int i = 0; i < 6; ++i)
	{
		if(a.n[i] != b.n[i])
		{
			return false;
		}
	}
	
	return true;
}

bool IsEqual(Dice a, Dice b)
{
	char cmd[25] = "NNNNWNNNWNNNENNNENNNWNNN";
	
	for(int i = 0; i < 24; ++i)
	{
		b = Roll(b, cmd[i]);
		if(IsSame(a, b))
		{
			return true;
		}
	}
	
	return false;
}

int FindTop(Dice a, int top, int front)
{
	char cmd[25] = "NNNNWNNNWNNNENNNENNNWNNN";
	
	for(int i = 0; i < 24; ++i)
	{
		a = Roll(a, cmd[i]);
		if(a.n[0] == top && a.n[1] == front)
		{
			return a.n[2];
		}
	}
	
	return -1;
}

int main()
{
	Dice D = InputDice();
	char cmd[128];
	scanf("%s", cmd);
	
	for(int i = 0; cmd[i] != 0; ++i)
	{
		D = Roll(D, cmd[i]);
	}
	
	printf("%d\n", D.n[0]);

    return 0;
}


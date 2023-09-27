#include <iostream>
#include <string>

using namespace std;

class Dice
{
public:
	Dice(unsigned int in[6])
	{
		for (int i = 0; i < 6; i++)
		{
			label[i] = in[i];
			//cout << "label[" << i << "]=" << label[i];
		}
		//cout << endl;
		Reset();
	}
	~Dice()
	{
	}
	void Reset()
	{
		N = 5;
		E = 3;
		S = 2;
		W = 4;
		F = 1;
		B = 6;
	}
	void Run(string &cmd)
	{
		for (int i = 0; i < cmd.size(); i++)
		{
			char c = cmd[i];
			if (c == 'S')
			{
				// 3, 4?????????????????????
				int tmpF = F;
				F = N;
				N = B;
				B = S;
				S = tmpF;
			}
			else if (c == 'N')
			{
				// 3, 4?????????????????????
				int tmpN = N;
				N = F;
				F = S;
				S = B;
				B = tmpN;
			}
			else if (c == 'E')
			{
				// 2,5?????????????????????
				int tmpB = B;
				B = E;
				E = F;
				F = W;
				W = tmpB;
			}
			else if (c == 'W')
			{
				int tmpW = W;
				W = F;
				F = E;
				E = B;
				B = tmpW;
			}
		}
	}
	int GetFront()
	{
		return F;
	}
	int GetLabel()
	{
		return label[F-1];
	}
	int GetSouthLabel()
	{
		return label[S-1];
	}
	// ?????°??????????????§N?????????W????????????
	int ThrowTo(int argF, int argS)
	{
		//cout << "DEBUG:Begin ThrowTo(int argF, int argS)" << endl;
		for (int x = 0; x < 4; x++)
		{
			Reset(); // TODO ?????????4??????!!!
			if (x == 0)
			{
			}
			else if (x == 1)
			{
				string cmd1 = "WSE";
				Run(cmd1);
			}
			else if (x == 2)
			{
				string cmd2 = "WSSE";
				Run(cmd2);
			}
			else if (x == 3)
			{
				string cmd3 = "WSSSE";
				Run(cmd3);
			}
			for (int w = 0; w < 4; w++)
			{
				for (int n = 0; n < 4; n++)
				{
					string nnnn = "N";
					Run(nnnn);
					//printf("inArg(%d,%d)   dice[%d,%d]\n", argF, argS, GetLabel(), GetSouthLabel());
					if (GetLabel() == argF && GetSouthLabel() == argS)
					{
						//cout << "HIT:" << label[E-1] << endl;
						return label[E-1];
					}
				}
				string wwww = "W";
				Run(wwww);
			}
		}
		return 1;
	}
private:
	unsigned int label[6];
	int N;
	int E;
	int S;
	int W;
	int F;
	int B;
};

int main()
{
	unsigned int in[6] = {0};
	unsigned int n;
	unsigned int q;
	string cmd;
	for (int i = 0; i < 6; i++)
	{
		cin >> n;
		in[i] = n;
	}
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int front, south;
		cin >> front >> south;
		
		// ?????´(East)?????¨????????????
		Dice d1(in);
		cout << d1.ThrowTo(front, south) << endl;
	}
	
	/*
	unsigned int in[6] = {1, 2, 3, 4, 5, 6};
	Dice d1(in);
	d1.ThrowTo(6, 5);
	*/
	
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Dice
{
public:
	Dice(unsigned int *in)
	{
		for (int i = 0; i < 6; i++)
		{
			label[i] = in[i];
			//cout << "label[" << i << "]=" << label[i];
		}
		//cout << endl;
		N = 5;
		E = 3;
		S = 2;
		W = 4;
		F = 1;
		B = 6;
		
	}
	~Dice()
	{
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
	string cmd;
	for (int i = 0; i < 6; i++)
	{
		cin >> n;
		in[i] = n;
	}
	cin >> cmd;
	
	Dice d1(in);
	d1.Run(cmd);
	cout << d1.GetLabel() << endl;;
	
	return 0;
}
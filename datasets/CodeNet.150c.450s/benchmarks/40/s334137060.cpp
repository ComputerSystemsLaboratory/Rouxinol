#include <iostream>
#include <string>

class saikoro
{
	private:
		int up, down, right, left, before, behind;
	public:
		saikoro(int a, int b, int c, int d, int e, int f);
		void W(void);
		void S(void);
		void E(void);
		void N(void);
		int which_up(void);
};

int main(void)
{
	using namespace std;
	int a, b, c, d, e, f;
	string str;
	cin >> a >> b >> c >> d >> e >> f;
	cin >> str;
	saikoro sai(a, b, c, d, e, f);
	for(int i = 0; i < str.length(); i++)
	{
		switch(str[i])
			{
				case 'W':
					sai.W();
					break;
				case 'S':
					sai.S();
					break;
				case 'N':
					sai.N();
					break;
				case 'E':
					sai.E();
					break;
			}
		}
	cout << sai.which_up() << endl;
	return 0;
}

saikoro::saikoro(int a, int b, int c, int d, int e, int f)
{
	up = a;
	before = b;
	behind = e;
	right = c;
	left = d;
	down = f;
}

void saikoro::W(void)
{
	int temp = left;
	left = up;
	up = right;
	right = down;
	down = temp;
}

void saikoro::S(void)
{
	int temp = before;
	before = up;
	up = behind;
	behind = down;
	down = temp;
}

void saikoro::E(void)
{
	int temp = right;
	right = up;
	up = left;
	left = down;
	down = temp;
}

void saikoro::N(void)
{
	int temp = behind;
	behind = up;
	up = before;
	before = down;
	down = temp;
}

int saikoro::which_up(void)
{
	return up;
}

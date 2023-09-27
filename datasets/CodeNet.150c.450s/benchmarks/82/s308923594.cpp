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
		void turnrl(void);
		void turnud(void);
		int which_up(void);
		int which_right(void);
		int which_before(void);
};

int main(void)
{
	using namespace std;
	int a, b, c, d, e, f, n;
	string str;
	cin >> a >> b >> c >> d >> e >> f >> n;
	saikoro sai(a, b, c, d, e, f);
	while(n--)
	{
		int m, n;
		cin >> m >> n;
		for(int i = 0; i < 3; i++)
		{
			sai.turnud();
			if(sai.which_up() == m)
			{
				while(sai.which_before() != n)
					sai.turnrl();
				cout << sai.which_right() << endl;
				break;
			}
		}
		if(sai.which_up() != m)
		{
			sai.E();
			while(sai.which_up() != m)
				sai.turnud();
			while(sai.which_before() != n)
				sai.turnrl();
			cout << sai.which_right() << endl;
		}
	}
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

void saikoro::turnrl(void)
{
	int temp = left;
	left = before;
	before = right;
	right = behind;
	behind = temp;
}

void saikoro::turnud(void)
{
	int temp = up;
	up = before;
	before = down;
	down = behind;
	behind = temp;
}

int saikoro::which_up(void)
{
	return up;
}

int saikoro::which_right(void)
{
	return right;
}

int saikoro::which_before(void)
{
	return before;
}

#include <iostream>
#include <string>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

struct Cube
{
	int f[6];
	Cube(){}

	void roll(int i,int j,int k,int l)
	{
		int t = f[i];
		f[i] = f[j];
		f[j] = f[k];
		f[k] = f[l];
		f[l] = t;
	}

	void roll_z() { roll(1,2,4,3); }
	void roll_y() { roll(0,2,5,3); }
	void roll_x() { roll(0,1,5,4); }

	void move(char c)
	{
		if(c == 'E') rep(i,3) roll_y();
		else if(c == 'W') roll_y();
		else if(c == 'N') roll_x();
		else if(c == 'S') rep(i,3) roll_x();
	}
};

int getRight(Cube c,int a,int b)
{
	rep(i,6)
	{
		rep(j,4)
		{
			if(c.f[0] == a && c.f[1] == b)
			{
				return c.f[2];
			}
			c.roll_z();
		}
		if(i%2 == 0) c.roll_y();
		else c.roll_x();
	}

	return -1;
}

int main()
{
	Cube c;
	int n;
	rep(i,6) cin >> c.f[i];
	cin >> n;

	rep(k,n)
	{
		int a,b;
		cin >> a >> b;
		cout << getRight(c,a,b) << endl;
	}
	return 0;
}
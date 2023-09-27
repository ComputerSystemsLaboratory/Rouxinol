#include <iostream>
#include <iomanip>
#include <complex>
#include <cmath>
#include <vector>
#include <queue>
#include <string>
#include <stdlib.h>

using namespace std;
typedef complex<long> com;

long tri(com a, com b) //triangle size
{
	return(conj(a)*b).imag() / 2;
}

long s_ll(string s) //入力した数字を10*6倍にしてlongとして読み取る
{
	int ssize=s.size();
	int j=6;
	for(int i=0;i<ssize;i++)
	{
		if(s[i]=='.')
		{
			s.erase(i,1);
			j=7-ssize+i;
			break;
		}
	}
	long l;
	l=atoi(s.c_str());
	for(int i=0;i<j;i++)
	{
		l=l*10;
	}
	return l;
}

int n;
string x1, x2, x3, x4, yi, y2, y3, y4;
long  X1, X2, X3, X4, Y1, Y2, Y3, Y4;

int main()
{
	cin >> n;
	while (n--)
	{
		cin >> x1 >> yi >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		X1 = s_ll(x1);
		X2 = s_ll(x2);
		X3 = s_ll(x3);
		X4 = s_ll(x4);
		Y1 = s_ll(yi);
		Y2 = s_ll(y2);
		Y3 = s_ll(y3);
		Y4 = s_ll(y4);
		if (tri(com(X2 - X1, Y2 - Y1), com(X4 - X3, Y4 - Y3)) == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}

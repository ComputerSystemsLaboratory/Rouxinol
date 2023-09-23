#include<iostream>
#include<cstdio>

using namespace std;

#define REP(i,n) for(int i = 0;i < n;i++)
	

int n_year[] = {20,19,20,19,20,19,20,19,20,19};
int m_year[] = {20,20,20,20,20,20,20,20,20,20};
int n_s,m_s;
int mireday;

int main()
{
	REP(i,10)
	{
		n_s += n_year[i];
		m_s += m_year[i];
	}
	int tmp = 999 / 3;
	mireday = tmp * m_s + (999 - tmp) * n_s + 1;
		
	int n;
	int y,m,d;
	cin >> n;
	REP(qqq,n)
	{
		cin >> y >> m >> d;
		int ou = 0,tmp1;
		
		tmp1 = (y-1) / 3;
		ou += tmp1 * m_s;
		if(y - 1 - tmp1 > 0)
			ou += (y - 1 - tmp1) * n_s;
		
		
		if(y % 3 == 0)
		{
			REP(i,m-1)
			{
				ou += m_year[i];
			}
		}
		else
		{
			REP(i,m-1)
			{
				ou += n_year[i];
			}
		}
		ou += d;
		
		cout << mireday - ou << endl;
		
	}
				
	return 0;
	
}
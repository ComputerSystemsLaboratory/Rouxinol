#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <iomanip>
#include <vector>
#include <queue>

#define PI 3.14159265359

#define INF 1000000;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

using namespace std;


/*
class ElectronicPetEasy
{
public:
	string isDifficult(int st1, int p1, int t1, int st2, int p2, int t2)
	{
		
	}
};
*/


int calc(int y, int m, int d)
{
	int res = 0;
	
	for (int i=1; i<y; i++)
	{
		res += (i % 3 != 0) ? 195 : 200;
	}
	for (int i=1; i<m; i++)
	{
		if (y%3!=0 && i%2==0) res += 19;
		else res += 20;
	}
	
	return res + d - 1;
}


int main()
{
	int n, y, m, d;
	
	cin >> n;
	while (n--)
	{
		cin >> y >> m >> d;
		cout << 196470 - calc(y, m, d) << endl;
	}
	
	return 0;
}
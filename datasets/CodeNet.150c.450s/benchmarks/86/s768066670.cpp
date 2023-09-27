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


int main()
{
	int N, M, P, a[101] = {0}, s = 0;
	
	while (cin >> N >> M >> P, N)
	{
		s = 0;
		for (int i=1; i<=N; i++)
		{
			cin >> a[i];
			s += a[i];
		}
		if (a[M])
		{
			cout << s*(100-P)/a[M] << endl;
		} else {
			cout << 0 << endl;
		}
	}
	
	return 0;
}
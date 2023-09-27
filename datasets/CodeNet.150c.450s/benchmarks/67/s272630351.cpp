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
	int N, sum, res;
	
	while (cin >> N, N)
	{
		res = 0;
		for (int i=1; i<=N; i++)
		{
			sum = i;
			for (int j=i+1; j<=N; j++)
			{
				sum += j;
				if (sum == N) res++;
				if (sum > N) break;
			}
		}
		cout << res << endl;
	}
	
	return 0;
}
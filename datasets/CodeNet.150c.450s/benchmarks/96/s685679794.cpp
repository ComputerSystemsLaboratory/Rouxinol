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
string button[10] = {"12345678", ".,!? ", "abc", "def", "ghi", "jkl" , "mno", "pqrs", "tuv", "wxyz" };


int main()
{
	int n;
	string s;
	
	cin >> n;
	rep(j,n)
	{
		cin >> s;
		int bnum=0, pushnum=0;
		REP(s.size())
		{
			if (s[i] == '0' && pushnum > 0)
			{
				cout << button[bnum][(pushnum + button[bnum].size()-1) % button[bnum].size()];
				pushnum = 0;
				bnum = 0;
				continue;
			}
			if (s[i] != '0'){pushnum++; bnum = s[i]-'0';}
		}
		cout << endl;
	}
	
	return 0;
}
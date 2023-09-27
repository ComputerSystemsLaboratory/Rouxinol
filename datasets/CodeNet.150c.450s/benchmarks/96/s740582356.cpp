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
	vector<string> V;
	
	V.push_back("");
	V.push_back(".,!? ");
	V.push_back("abc");
	V.push_back("def");
	V.push_back("ghi");
	V.push_back("jkl");
	V.push_back("mno");
	V.push_back("pqrs");
	V.push_back("tuv");
	V.push_back("wxyz");
	
	int n;
	cin >> n;
	
	for (int i=0; i<n; i++)
	{
		string out = "";
		string inp = "";
		cin >> inp;
		char now;
		int kai;
		now = '0';
		kai = 0;
		for (int j=0; j<inp.length(); j++)
		{
			if (inp[j] == '0')
			{
				if (kai != 0)
				{
					kai--;
					out += V[now-'0'][kai%(V[now-'0'].length())];
				}
				now = inp[j];
				kai = 0;
				continue;
			}
			now = inp[j];
			kai++;
		}
		cout << out << endl;
	}
	
	return 0;
}
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

typedef long long ll;

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


ll gcd(ll a, ll b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}


int main()
{
	ll a, b;
	ll gcd_num, lcm;
	
	while (cin >> a >> b)
	{
		gcd_num = gcd(a, b);
		lcm = a * b / gcd_num;
		cout << gcd_num << " " << lcm << endl;
	}
	
	return 0;
}
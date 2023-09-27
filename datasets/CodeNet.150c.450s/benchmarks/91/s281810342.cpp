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

int prime[1000000];
bool is_prime[1000001];

int sieve(int n)
{
	int p = 0;
	
	for (int i=0; i<=n; i++) is_prime[i] = true;
	is_prime[0] = is_prime[1] = false;
	for (int i=2; i<=n; i++)
	{
		if (is_prime[i])
		{
			prime[p++] = i;
			for (int j=2*i; j<=n; j+=i) is_prime[j] = false;
		}
	}
	
	return p;
}


int main()
{
	int n;
	
	while (cin >> n)
	{
		cout << sieve(n) << endl;
	}
	
	return 0;
}
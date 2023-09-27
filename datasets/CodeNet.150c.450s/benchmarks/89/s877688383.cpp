#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <functional>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <typeinfo>
#define PI 3.14159265359
#define INF 99999999
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)
#define EPS 1e-10
#define pb push_back
#define mp make_pair
typedef long long ll;
using namespace std;
typedef pair<int, int> P;

bool isLeap(int y);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);
double distanceAB(double xa, double ya, double xb, double yb);
void trace(int A[], int N);

/*
class Target
{
public:
	vector <string> draw(int n)
	{

	}
};
*/


int prime[200000];
bool is_prime[1000001];

void sieve()
{
	for (int i=0; i<1000001; i++) is_prime[i] = true;
	is_prime[0] = is_prime[1] = false;
	for (int i=2; i<1000001; i++)
	{
		if (is_prime[i])
		{
			for (int j=2*i; j<1000001; j+=i) is_prime[j] = false;
		}
	}
	return;
}


int main()
{
	int a, d, n;
	
	sieve();
	
	while (cin >> a >> d >> n, a || d || n)
	{
		int cnt = 0;
		
		for (int i=a; 1; i+=d)
		{
			if (is_prime[i])
			{
				cnt++;
			}
			if (cnt == n)
			{
				cout << i << endl;
				break;
			}
		}
	}
	
	return 0;
}


bool isLeap(int y)
{
	return y % 400 == 0
						? true : y % 100 == 0
						? false : y % 4 == 0
						? true : false;
}

ll gcd(ll a, ll b)
{
	return (b > 0) ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)
{
	return a / gcd(a, b) * b;
}

void trace(int A[], int N)
{
	REP(N)
	{
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
}

double distanceAB(double xa, double ya, double xb, double yb)
{
	return sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya));
}
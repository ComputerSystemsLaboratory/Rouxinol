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


struct Card
{
	char suit, value;
};

void bubble(struct Card A[], int N)
{
	rep(i, N)
	{
		for (int j=N-1; j>=i; j--)
		{
			if (A[j].value < A[j-1].value)
			{
				Card t = A[j]; A[j] = A[j - 1]; A[j - 1] = t;
			}
		}
	}
}

void selection(struct Card A[], int N)
{
	rep(i, N)
	{
		int minj = i;
		for (int j=i; j<N; j++)
		{
			if (A[j].value < A[minj].value) minj = j;
		}
		Card t = A[i]; A[i] = A[minj]; A[minj] = t;
	}
}

void print(struct Card A[], int N)
{
	rep(i, N)
	{
		if (i > 0) cout << " ";
		cout << A[i].suit << A[i].value;
	}
	cout << endl;
}

bool isStable(struct Card C1[], struct Card C2[], int N)
{
	rep(i, N)
	{
		if (C1[i].suit != C2[i].suit) return false;
	}
	return true;
}


int main()
{
	Card C1[100], C2[100];
	int N;
	char ch;
	
	cin >> N;
	rep(i, N) cin >> C1[i].suit >> C1[i].value;
	
	rep(i, N) C2[i] = C1[i];
	
	bubble(C1, N);
	selection(C2, N);
	
	print(C1, N);
	cout << "Stable" << endl;
	print(C2, N);
	if (isStable(C1, C2, N))
	{
		cout << "Stable" << endl;
	} else {
		cout << "Not stable" << endl;
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
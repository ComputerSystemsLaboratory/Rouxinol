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

string getReverse(string str);
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



int main()
{
	int m;
	string inp, front, back;
	
	cin >> m;
	rep(i, m)
	{
		cin >> inp;
		set<string> s;
		for (int i=1; i<=inp.length()-1; i++)
		{
			front = inp.substr(0, i);
			back = inp.substr(i);
			s.insert(front + back);
			s.insert(back + front);
			s.insert(getReverse(front) + back);
			s.insert(back + getReverse(front));
			s.insert(front + getReverse(back));
			s.insert(getReverse(back) + front);
			s.insert(getReverse(front) + getReverse(back));
			s.insert(getReverse(back) + getReverse(front));
		}
		cout << s.size() << endl;
	}
	
	return 0;
}


string getReverse(string str)
{
	string ret = "";
	for (int i=str.length()-1; i>=0; i--)
	{
		ret += str.substr(i, 1);
	}
	return ret;
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
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
#include <set>
#include <typeinfo>
#define PI 3.14159265359
#define INF 99999999;
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)
#define EPS 1e-10
typedef long long ll;
using namespace std;
typedef pair<int, int> P;

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


int top, S[1000];

void push(int x)
{
	S[++top] = x;
}

int pop()
{
	top--;
	return S[top+1];
}


int main()
{
	int a, b;
	
	top = 0;
	char s[100];
	
	while (scanf("%s", s) != EOF)
	{
		if (s[0] == '+')
		{
			a = pop();
			b = pop();
			push(a + b);
		} else if (s[0] == '-') {
			b = pop();
			a = pop();
			push(a - b);
		} else if (s[0] == '*') {
			a = pop();
			b = pop();
			push(a * b);
		} else {
			push(atoi(s));
		}
	}
	
	cout << pop() << endl;
	
	return 0;
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
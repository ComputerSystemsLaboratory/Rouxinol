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


int parent(int i)
{
	return i / 2;
}

int left(int i)
{
	return 2 * i;
}

int right(int i)
{
	return 2 * i + 1;
}


int main()
{
	int H, i;
	
	cin >> H;
	int A[H + 1];
	for (i=1; i<=H; i++) cin >> A[i];
	
	for (i=1; i<=H; i++)
	{
		cout << "node " << i << ": key = " << A[i] << ", ";
		if (parent(i) >= 1) cout << "parent key = " << A[parent(i)] << ", ";
		if (left(i) <= H) cout << "left key = " << A[left(i)] << ", ";
		if (right(i) <= H) cout << "right key = " << A[right(i)] << ", ";
		cout << endl;
	}
	
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
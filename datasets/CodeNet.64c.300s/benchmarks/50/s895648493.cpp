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

int bubbleSort(int A[], int N)
{
	int sw = 0;
	bool flag = 1;
	
	for (int i=0; flag; i++)
	{
		flag = 0;
		for (int j=N-1; j>=i+1; j--)
		{
			if (A[j] < A[j-1])
			{
				swap(A[j], A[j-1]);
				flag = 1;
				sw++;
			}
		}
	}
	
	return sw;
}

int main()
{
	int A[100], N, sw;
	
	cin >> N;
	REP(N) cin >> A[i];
	sw = bubbleSort(A, N);
	
	trace(A, N);
	cout << sw << endl;
	
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
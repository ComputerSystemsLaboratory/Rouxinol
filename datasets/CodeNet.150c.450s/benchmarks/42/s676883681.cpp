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
//typedef pair<int, int> P;

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

#define LEN 100005

typedef struct pp
{
	char name[100];
	int t;
} P;

P Q[LEN];
int head, tail, n;

void enqueue(P x)
{
	Q[tail] = x;
	tail = (tail + 1) % LEN;
}

P dequeue()
{
	P x = Q[head];
	head = (head + 1) % LEN;
	return x;
}


int main()
{
	int elaps = 0, c;
	int i, q;
	P u;
	cin >> n >> q;
	
	for (i=1; i<=n; i++)
	{
		cin >> Q[i].name;
		cin >> Q[i].t;
	}
	head = 1;
	tail = n + 1;
	
	while (head != tail)
	{
		u = dequeue();
		c = min(q, u.t);
		u.t -= c;
		elaps += c;
		if (u.t > 0) enqueue(u);
		else cout << u.name << " " << elaps << endl;
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
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


#define MAX 10000
#define NIL -1

struct Node {int p, l, r;};
Node T[MAX];
int n;

void preParse(int u)
{
	if (u == NIL) return;
	printf(" %d", u);
	preParse(T[u].l);
	preParse(T[u].r);
}

void inParse(int u)
{
	if (u == NIL) return;
	inParse(T[u].l);
	printf(" %d", u);
	inParse(T[u].r);
}

void postParse(int u)
{
	if (u == NIL) return;
	postParse(T[u].l);
	postParse(T[u].r);
	printf(" %d", u);
}


int main()
{
	int i, v, l, r, root;
	
	cin >> n;
	REP(n) T[i].p = NIL;
	REP(n)
	{
		cin >> v >> l >> r;
		T[v].l = l;
		T[v].r = r;
		if (l != NIL) T[l].p = v;
		if (r != NIL) T[r].p = v;
	}
	
	REP(n) if (T[i].p == NIL) root = i;
	
	printf("Preorder\n");
	preParse(root);
	printf("\n");
	printf("Inorder\n");
	inParse(root);
	printf("\n");
	printf("Postorder\n");
	postParse(root);
	printf("\n");
	
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
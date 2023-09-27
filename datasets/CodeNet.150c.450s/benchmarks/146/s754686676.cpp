#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

#define EPS 1e-10
#define EQUAL(a, b) (fabs((a)-(b))<EPS)

typedef vector<int> vi;

int main()
{
	int n;
	scanf("%d", &n);
	rep(i, n){
		double x1, y1, x2, y2, x3, y3, x4, y4;
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		puts(EQUAL((x2-x1)*(y4-y3), (y2-y1)*(x4-x3)) ? "YES" : "NO");
	}

	return 0;
}
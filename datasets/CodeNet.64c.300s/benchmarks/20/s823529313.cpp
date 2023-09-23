#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <queue>
#include <string>
#include <complex>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define repa(i,s,e) for(int i=s; i<=e; i++)
#define repd(i,s,e) for(int i=s; i>=e; i--)

typedef vector<int> vi;

int main() {
	int n;
	while(scanf("%d", &n)!=EOF) {
		int s = 0;
		int w = 600 / n;
		rep(i,w) {
			int h = n * i;
			s += h * h * n;
		}
		printf("%d\n", s);
	}
}
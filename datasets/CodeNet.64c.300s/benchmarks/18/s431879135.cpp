#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <deque>
#include <cstdio>
#include <cmath>
#include <complex>
#include <iostream>
#include <iterator>

using namespace std;

#define reep(i,f,t) for(int i=f ; i<int(t) ; ++i)
#define rep(i,n) reep(i, 0, n) 

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main()
{
	int tri[31];
	tri[0] = tri[1] = 1;
	tri[2] = 2;
	reep(i, 3, 31)
		tri[i] = tri[i-1] + tri[i-2] + tri[i-3];
	
	int n;
	while(scanf("%d", &n), n){
		printf("%d\n", (tri[n]+3649)/3650);
	}
	
	return 0;
}
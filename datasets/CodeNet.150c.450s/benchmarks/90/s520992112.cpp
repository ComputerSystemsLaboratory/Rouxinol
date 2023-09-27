#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <map>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	map<int, int> m;
	int a;
	int best = 0;
	while(scanf("%d", &a) != EOF){
		if(m.count(a))
			m[a]++;
		else
			m[a] = 1;
		best = max(best, m[a]);
	}

	for(map<int,int>::iterator itr = m.begin(); itr != m.end(); ++itr)
		if(itr->second == best)
			printf("%d\n", itr->first);

	return 0;
}
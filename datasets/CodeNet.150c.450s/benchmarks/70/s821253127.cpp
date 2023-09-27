#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int days[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	const char* strs[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday" };

	reep(i, 1, 12)
		days[i] += days[i-1];

	int m, d;
	while(scanf("%d%d", &m, &d), m&&d){
		puts(strs[(days[m-1]+d-1)%7]);
	}

	return 0;
}
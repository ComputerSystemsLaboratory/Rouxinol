#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int w, n;
	scanf("%d%d", &w, &n);

	vi line(w);
	rep(i, w) line[i] = i+1;
	rep(i, n){
		int a, b;
		scanf("%d,%d", &a, &b);
		swap(line[a-1], line[b-1]);
	}

	rep(i, w) printf("%d\n", line[i]);

	return 0;
}
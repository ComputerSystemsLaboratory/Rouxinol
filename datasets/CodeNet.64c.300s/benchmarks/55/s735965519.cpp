#include <cstdio>
#include <iostream>
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
using namespace std;

int main() {
	int n;
	int i = 1;
	while(scanf("%d", &n), n) {
		cout << "Case " << i << ": " << n << endl;
		i++;
	}
	return 0;
}
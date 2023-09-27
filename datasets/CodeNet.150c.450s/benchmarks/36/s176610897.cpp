#include <iostream>
#include <cstdio>
using namespace std;

#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	int n; 
	while(1) {
		if(scanf("%d", &n) == EOF) break;
		int total = 0;
		rep2(i,1,(600/n)) {
			total += n * n * i * n * i;
		}
		cout << total << endl;
	}
	return 0;
}
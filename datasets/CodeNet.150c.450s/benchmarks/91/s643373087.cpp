#include <stdio.h>
#include <iostream>
#define rep(i,n) for(int i = 2; i <= (n); ++i)
using namespace std;
int n;
bool p[1000000];
int main() {
	rep(i,1000) {
		int k = i;
		if(!p[k]) {
			while(k < 1000000) {
				k += i;
				p[k] = true;
			}
		}
	}
	while(scanf("%d\n", &n) != EOF) {
		int count = 0;
		rep(i,n) {
			if(!p[i]) count++;
		}
		cout << count << endl;
	}
	return 0;
}
//AC
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0033
//dfs
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
int res = 0;
int num[11];
int T;
int B = 0, C = 0;
void d(int i) {
	if (i == 10) return;
	if (num[i] > B) {
		 B = num[i];
		res++;
	}else if(num[i] > C){
		C = num[i];
		res++;
	}
	d(i + 1);
}
int main() {
	
	while (scanf("%d", &T)!= EOF) {
		
		while (T--) {
			C=B=res = 0;
			for (int i = 0; i < 10; i++) {
				scanf("%d", &num[i]);
			}
			d(0);
			
			printf("%s\n", res==10?"YES":"NO");
		}
	}
	return 0;
}
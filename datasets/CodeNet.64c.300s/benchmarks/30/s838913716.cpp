#include <cstdio>
using namespace std;
const int coin[] = {500,100,50,10,5,1};
int main() {
	int n;
	while (scanf("%d",&n)&&n!=0) {
		int res=0,turi=1000-n,m=0;
		while (turi!=0) {
			if (turi<coin[m]) {
				m++;
			} else {
				turi -= coin[m];
				res++;
			}
		}
		printf("%d\n",res);
	}
}
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n,p;
	int stone[50];
	while(scanf("%d %d",&n,&p),n) {
		for(int i=0;i<n;i++) stone[i]=0;
		int k=0,x=p;
		while(stone[k]<p) {
			if(x>0) {
				x--;
				stone[k]++;
			}else {
				x+=stone[k];
				stone[k]=0;
			}
			k=(k+1)%n;
		}
		printf("%d\n",k);
	}
}
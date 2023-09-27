#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int days(int y,int m,int d) {
	int sum=d;
	for(int i=1;i<y;i++) {
		if(i%3==0) {
			sum+=200;
		}else {
			sum+=195;
		}
	}
	for(int i=1;i<m;i++) {
		if(y%3==0||i%2==1) {
			sum+=20;
		}else {
			sum+=19;
		}
	}
	return sum;
}
int main() {
	int n;
	scanf("%d",&n);
	int x=days(1000,1,1);
	for(int i=0;i<n;i++) {
		int y,m,d;
		scanf("%d %d %d",&y,&m,&d);
		printf("%d\n",x-days(y,m,d));
	}
}
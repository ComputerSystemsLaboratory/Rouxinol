#include <cstdio>
using namespace std;

int main() {
	int a,b;
	while(scanf("%d",&a)!=EOF) {
		scanf("%d",&b);
		int total=a+b,ans=1;
		while((total/1)>=10) {
			total/=10;
			++ans;
		}
		printf("%d\n",ans);
	}
	return 0;
}
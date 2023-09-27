#include <stdio.h>
#include <math.h>

using namespace std;

int main(void) {
	int a,b,sum;
	
	while(scanf("%d%d",&a,&b)!=EOF){
		int ans;
		ans = (int)log10((double)(a+b))+1;
		printf("%d\n",ans);
	}
	
	return 0;
}
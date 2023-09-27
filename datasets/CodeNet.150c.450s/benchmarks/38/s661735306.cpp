#include <stdio.h>
#include <algorithm>

int main(){
	int i,n,a[3];
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d %d %d",&a[0],&a[1],&a[2]);
		std::sort(a,a + 3);
		if(a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
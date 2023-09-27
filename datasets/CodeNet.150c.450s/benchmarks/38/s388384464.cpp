#include <stdio.h>
#include <algorithm>

using namespace std;


int main()
{
	int a[3],num;
	int i;
	scanf("%d",&num);
	for(i = 0; i < num; i++){
		scanf("%d %d %d",&a[0],&a[1],&a[2]);
		sort(a,a+3);
		if(a[0] * a[0] + a[1] * a[1] == a[2] * a[2]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
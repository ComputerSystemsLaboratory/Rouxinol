#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int a[5];
	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	sort(a,a + 5);
	reverse(a,a + 5);
	printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
	return 0;
}
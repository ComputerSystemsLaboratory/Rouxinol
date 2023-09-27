#include <stdio.h>
#include <algorithm>
using namespace std;


int main(){
	int i,h[10];
	for(i = 0;i < 10;i++) scanf("%d",&h[i]);
	sort(h,h + 10);
	for(i = 9;i > 6;i--) printf("%d\n",h[i]);
	return 0;
}
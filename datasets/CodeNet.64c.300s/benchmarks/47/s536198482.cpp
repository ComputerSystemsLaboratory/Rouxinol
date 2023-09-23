#include<cstdio>

int main(void) {
	int map[100],in,i;
	for(i=0;i<100;i++) { map[i]=0; }
	while(scanf("%d",&in)!=EOF) { map[in-1]++; }
	in=0;
	for(i=0;i<100;i++) { if(in<map[i]) { in=map[i]; } }
	for(i=0;i<100;i++) { if(in==map[i]) { printf("%d\n",i+1); } }
	return 0;
}
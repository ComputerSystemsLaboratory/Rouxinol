#include <cstdio>
#include <cstring>
char tb[128];
int main() {
	int n,m;
	while(scanf("%d",&n),n) {
		memset(tb,0,sizeof(tb));
		for(int i=0;i<n;i++) {
			getchar();
			char ch1=getchar(),ch2=(getchar(),getchar());
			tb[ch1]=ch2;
		}
		scanf("%d",&m);
		for(int i=0;i<m;i++) {
			getchar();
			char ch=getchar();
			if(tb[ch]==0) putchar(ch);
			else putchar(tb[ch]);
		}
		putchar('\n');
	}
}
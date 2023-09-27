#include <cstdio>
#include <cstring>
char C[127];
int main() {
	int n,m;
	while(scanf("%d",&n),n) {
		getchar();
		char ch1,ch2;
		memset(C,0,sizeof(C));
		for(int i=0;i<n;i++) {
			ch1=getchar();getchar();
			ch2=getchar();getchar();
			C[ch1]=ch2;
		}
		scanf("%d",&m);
		getchar();
		for(int i=0;i<m;i++) {
			char ch=getchar();getchar();
			if(C[ch])printf("%c",C[ch]);
			else printf("%c",ch);
		}
		putchar('\n');
	}
}
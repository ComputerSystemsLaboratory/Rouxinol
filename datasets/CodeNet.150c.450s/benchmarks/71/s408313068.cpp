#include <cstdio>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n) != EOF) {
		int cnt=0;
		for(int a=0;a<10;++a) {
			if(n-a>27) continue;
			for(int b=0;b<10;++b) {
				if(n-a-b>18) continue;
				for(int c=0;c<10;++c) {
					if(n-a-b-c>9) continue;
					for(int d=0;d<10;++d) {
						if(n == (a+b+c+d)) {
							++cnt;
						}
					}
				}
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}
#include <cstdio>

int main()
{
	while(true) {
	
		int n, m;
		char table[256];
		
		for(int i = 0; i < 256; ++i)
			table[i] = i;
		
		scanf("%d", &n);
		if(n == 0)
			break;
		
		for(int i = 0; i < n; ++i) {
		
			char a[16], b[16];
			scanf("%s%s", a, b);
			table[a[0]] = b[0];
		}
		
		scanf("%d", &m);
		for(int i = 0; i < m; ++i) {
		
			char c[16];
			
			scanf("%s", c);
			printf("%c", table[c[0]]);
		}
		
		printf("\n");
	}

	return 0;
}
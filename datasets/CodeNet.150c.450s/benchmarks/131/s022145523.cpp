#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int a[32], L;
	
	while (scanf("%d %d", &a[0], &L) && L){
		int idx = 0;
		while (1){
			int M, m;
			char buf[1024];
			sprintf(buf, "%0*d", L, a[idx]);
			sort(buf, buf + L);
			sscanf(buf, "%d", &m);
			reverse(buf, buf + L);
			sscanf(buf, "%d", &M);
			
			a[++idx] = M - m;
			
			for (int i = 0; i < idx - 1; i++){
				if (a[idx - 1] == a[i]){
					printf("%d %d %d\n", i, a[i], idx - 1 - i);
					goto next;
				}
			}
		}
next:;
	}
	
	return (0);
}
#include <cstdio>
using namespace std;

int main (void)
{
	int m, f, r, go;

	while (scanf("%d %d %d", &m, &f, &r)!= EOF && m!=-1 || f!=-1 || r!=-1){
		go = m+f;
		if (m == -1 || f == -1 || go < 30)
			printf("F\n");
		else{
			if (go >= 80)
				printf("A\n");
			else if (go >= 65)
				printf("B\n");
			else if (go >= 50)
				printf("C\n");
			else if (go >= 30){
				if (r >= 50)
					printf("C\n");
				else
					printf("D\n");
			}
		}
	}
	return 0;
}
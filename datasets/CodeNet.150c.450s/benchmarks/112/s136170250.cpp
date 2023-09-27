#include <cstdio>

using namespace std;

char chan[2][1024];
char str[100000024];

int main()
{
	int n, m;
	int i, j;
	
	while (1){
		
		scanf("%d", &n);
		
		if (n == 0){
			break;
		}
		
		for (i = 0; i < n; i++){
			scanf("%s %s", &chan[0][i], &chan[1][i]);
			//printf("chan[0][%d]=%c\n", i, chan[0][i]);
			//printf("chan[1][%d]=%c\n", i, chan[1][i]);
		}
		
		scanf("%d", &m);
		
		for (i = 0; i < m; i++){
			scanf("%s", &str[i]);
			for (j = 0; j < n; j++){
				if (str[i] == chan[0][j]){
					str[i] = chan[1][j];
					break;
				}
			}
			//printf("str[%d]=%c\n", i, str[i]);
		}
		
		str[i] = '\0';
		
		printf("%s\n", str);
	}
	
	return (0);
}
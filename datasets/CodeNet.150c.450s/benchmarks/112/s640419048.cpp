#include <cstdio>
#include <cstring>

using namespace std;

char bucket[256];
char str[100000000];

int main()
{
	int n, m;
	char moto[2], saki[2];
	
	while (1){
		scanf("%d", &n);
		
		if (n == 0){
			break;
		}
		
		for (int i = 0; i < 256; i++){
			bucket[i] = i;
		}
		
		for (int i = 0; i < n; i++){
			scanf("%s %s", moto, saki);
			bucket[moto[0]] = saki[0];
			//printf("%d\n", moto[0]);
		}
		
		scanf("%d", &m);
		
		for (int i = 0; i < m; i++){
			scanf("%s", &str[i]);
			//printf("%d\n", str[i]);
		}
		
		int len = strlen(str);
		
		for (int i = 0; i < len; i++){
			str[i] = bucket[str[i]];
		}
		
		printf("%s\n", str);
	}
	
	return (0);
}
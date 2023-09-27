#include <cstdio>
#include <string>

using namespace std;

int main(void){
	int n, m, i, j;
	char org[257], x, y;
//	FILE* f;
//	f = fopen("test.txt","w");
	while(1){
		scanf("%d%*c",&n);
		if(!n){
			break;
		}
		for(i = 0;i < 256;i++){
			org[i] = (char)i;
		}
		for(i = 0;i < n;i++){
			scanf("%c%*c%c%*c",&x,&y);
			org[x] = y;
		}
		scanf("%d%*c",&m);
		for(i = 0;i < m;i++){
			x = getchar();
			getchar();
			printf("%c",org[x]);
		}
		printf("\n");
	}
//	fclose(f);
	return 0;
}
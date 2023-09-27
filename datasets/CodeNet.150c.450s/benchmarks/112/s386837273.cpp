#include <cstdio>
#include <string>

int main(){
	int n, m;
	char a[100001], b[100001];
	while(scanf("%d", &n), n != 0){
		char f;
		for(int i = 0;i < n;i++){
			scanf(" %c %c", &a[i], &b[i]);
		}
		scanf("%d", &m);
		for(int i = 0;i < m;i++){
			scanf(" %c", &f);
			int flag = 1;
			for(int j = 0;a[j] != '\0' && flag == 1;j++){
				if(a[j] == f){
					printf("%c", b[j]);
					flag = 0;
				}
			}
			if(flag == 1)printf("%c", f);
		}
		printf("\n");
	}
	
	return 0;
}
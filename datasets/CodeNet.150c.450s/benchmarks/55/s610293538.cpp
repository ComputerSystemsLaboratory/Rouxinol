#include <stdio.h>

char s[1024];

int main(){
	while(scanf("%s",s), s[0] != '0'){
		int n = 0;
		int i = 0;
		while(s[i] != 0){
			n += s[i] - '0';
			i++;
		}
		printf("%d\n",n);
	}
	return 0;
}


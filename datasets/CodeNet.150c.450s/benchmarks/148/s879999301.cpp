#include<stdio.h>

int main(){
	int n, ac = 0, wa = 0, tle = 0, re = 0;
	char str[10];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%s", str);
		if(str[0] == 'A'){
			ac++;
		}
		if(str[0] == 'W'){
			wa++;
		}
		if(str[0] == 'T'){
			tle++;
		}
		if(str[0] == 'R'){
			re++;
		}
	}
	printf("AC x %d\n", ac);
	printf("WA x %d\n", wa);
	printf("TLE x %d\n", tle);
	printf("RE x %d\n", re);
	return 0;
}

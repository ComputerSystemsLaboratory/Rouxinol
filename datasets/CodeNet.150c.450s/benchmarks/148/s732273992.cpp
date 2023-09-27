#include <stdio.h>

int main (){
	
	int n;
	int ac=0, wa=0, tle=0, re=0;
	scanf("%d", &n);
	
	char str[105];
	
	while(n--){
		scanf("%s", &str);
		if(str[0]=='A'){
			ac++;
		} else if(str[0]=='W'){
			wa++;
		} else if(str[0]=='T'){
			tle++;
		} else if(str[0]=='R'){
			re++;
		}
	}
	printf("AC x %d\n", ac);
	printf("WA x %d\n", wa);
	printf("TLE x %d\n", tle);
	printf("RE x %d\n", re);
	
	
	
	return 0;
}
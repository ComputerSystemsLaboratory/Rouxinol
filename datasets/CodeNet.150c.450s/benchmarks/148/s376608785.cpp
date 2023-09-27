#include <stdio.h>

int main(){
	long long int n;
	int ac=0;
	int wa=0;
	int tle=0;
	int re=0;
	char testing[4];
	scanf("%lld", &n);
	for(int i=0 ; i<n ; i++){
		scanf("%s", &testing);
		switch (testing[0]){
		case 'A':
			ac++;
			break;
		case 'W':
			wa++;
			break;
		case 'T':
			tle++;
			break;
		case 'R':
			re++;
			break;
		}
	}
	printf("AC x %d\n", ac);
	printf("WA x %d\n", wa);
	printf("TLE x %d\n", tle);
	printf("RE x %d\n", re);
	return 0;
}
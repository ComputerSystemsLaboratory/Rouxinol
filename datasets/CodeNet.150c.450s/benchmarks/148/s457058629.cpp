#include <stdio.h>


int main(){
	int N, dec[4]= {0};
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		char S[5];
		scanf("%s", S);
		switch(S[0]){
			case 'A':
				dec[0]++;
				break;
			case 'W':
				dec[1]++;
				break;
			case 'T':
				dec[2]++;
				break;
			case 'R':
				dec[3]++;
				break;
		}
	}
	printf("AC x %d\n", dec[0]);
	printf("WA x %d\n", dec[1]);
	printf("TLE x %d\n", dec[2]);
	printf("RE x %d\n", dec[3]);
	
	
	return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
	int N;
	int x;
	char S[255];
	scanf("%d", &N);
	int ctr[8] = {0};
	for(int i = 0 ; i < N ; i++){
		scanf("%s", &S);
		if(x = strcmp (S, "AC") == 0){
			++ctr[1];
		}
		if(x = strcmp (S, "WA") == 0){
			++ctr[2];
		}
		if(x = strcmp (S, "TLE") == 0){
			++ctr[3];
		}
		if(x = strcmp (S, "RE") == 0){
			++ctr[4];
		}
	}
	printf("AC x %d\n", ctr[1]);
	printf("WA x %d\n", ctr[2]);
	printf("TLE x %d\n", ctr[3]);
	printf("RE x %d\n", ctr[4]);
	return 0;
}
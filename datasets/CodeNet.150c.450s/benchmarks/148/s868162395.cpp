#include <stdio.h>
#include <string.h> // strmcp(s1, s2)
// contoh soal menggunakan switch case
// 1. scan semua input
// 2. cari jumlah ac, wa, tle, re
//strcmp membandingkan apakah str 1 dgn str2
int main(){
	int N, AC = 0, WA = 0, TLE = 0, RE = 0;
	scanf("%d", &N);
	
	for (int i =0; i<N; i++){
		char str[10];
		scanf("%s", str);
		
		if(strcmp (str, "AC") == 0) {
		AC++;
		} else if(strcmp (str, "WA") == 0) {
		WA++;
	}else if(strcmp (str, "TLE") == 0) {
		TLE++;
	}else if(strcmp (str, "RE") == 0) {
		RE++;
	}
	}
    printf("AC x %d\n", AC);
	printf("WA x %d\n", WA);
  	printf("TLE x %d\n",TLE);
  	printf("RE x %d\n", RE);	
	return 0;
}
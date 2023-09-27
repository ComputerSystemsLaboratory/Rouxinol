#include <stdio.h>

#include <string.h>

 

int main(){

	int x,ac,wa,tle,re;	char c[16];

	ac=wa=tle=re=0;

	scanf("%d",&x);

	for(int i=0; i<x; i++){

		scanf("%s",&c);

		if (strcmp(c,"AC") == 0) ac++;

		else if (strcmp(c,"WA") == 0) wa++;

		else if (strcmp(c,"TLE") == 0) tle++;

		else if (strcmp(c,"RE") == 0) re++;

	}

	printf("AC x %d\n", ac);

	printf("WA x %d\n", wa);

	printf("TLE x %d\n", tle);

	printf("RE x %d\n", re);

 

	return 0;

}
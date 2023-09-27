#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int tc;
	char x [10];
	int ac=0,wa=0,tle=0,re=0;
	scanf("%d",&tc);
	while(tc--){
		scanf("%s",&x);
		if(strcmp(x, "AC") ==0) ac++;
		else if (strcmp(x, "WA") ==0) wa++;
		else if (strcmp(x, "TLE") ==0) tle++;
		else if (strcmp(x, "RE") ==0) re++;
	}
	printf("AC x %d\n",ac);
	printf("WA x %d\n",wa);
	printf("TLE x %d\n",tle);
	printf("RE x %d\n",re);
	return 0;
}
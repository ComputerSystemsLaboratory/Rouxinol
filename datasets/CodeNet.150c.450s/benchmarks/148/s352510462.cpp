#include<stdio.h>

int main(){

	int a;
	char str1[20];
	int str2[20] = {0};
	scanf("%d", &a);
	
	for (int i=0; i<a; i++){
		scanf("%s", &str1);
		
		if(str1[0]== 'A'){
			str2[0]++;
		}
		else if(str1[0]=='W'){
			str2[1]++;
		}
		else if(str1[0]=='T'){
			str2[2]++;
		}
		else if(str1[0]=='R'){
			str2[3]++;
		}
	}
	printf("AC x %d\n",str2[0]);
	printf("WA x %d\n",str2[1]);
	printf("TLE x %d\n",str2[2]);
	printf("RE x %d\n",str2[3]);
	
	return 0;
}
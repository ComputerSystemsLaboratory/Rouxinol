#include<cstdio>
#include<cstring>

int main(){
	
	char abc[27]="abcdefghijklmnopqrstuvwxyz";
	int num[27]={};
	
	char cha;

	
	int i=0;
	while (scanf("%c", &cha) !=EOF){

		for (int k=0; k<26; k++){
			if (cha==65+k || cha==97+k) num[k]++;			
		}
		i++;
	}
	
	for (int k=0; k<26; k++){
		printf("%c : %d\n", abc[k], num[k]);
	}

	
	return 0;
}
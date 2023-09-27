#include<stdio.h>
#include<string.h>

int n,m;
char s1[100],s2[100];
char hash[2000];

char output[20000000];

int main(){
	int i;
	
	while(1){
		for( i = 0; i < 1000; i++ )
			hash[i] = 0;
			
		scanf("%d",&n);
		if(!n)break;
		for( i = 0; i < n; i++ ){
			scanf("%s%s",s1,s2);
			hash[(int)s1[0]] = s2[0];
		}
		scanf("%d",&m);
	//	printf("read finish!\n");
	
		for( i = 0; i < m; i++ ){
			s1[0] = '\0';
			scanf("%s",s1);
			if( hash[s1[0]] ){
				char s[3] = {hash[(int)s1[0]],'\0'};
				strcat(output,s);
			}
			else{
				strcat(output,s1);
			}
		}
		printf("%s\n",output);
		output[0] = '\0';
	}
	return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j,len;
	int score[2] = {0,0};
	char str[101],str2[101];
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %s",str,str2);
		if(strlen(str) <= strlen(str2)){
			len = strlen(str2);
		}else{
			len = strlen(str);
		}
		for(j=0;j<len;j++){
			if(str[j] == str2[j]){
				if(j == len-1){
					score[0] += 1;
					score[1] += 1;
					break;
				}else if(str[j] == '\n'){
					score[1] +=3;
					break;
				}else if(str2[j] == '\n'){
					score[0] +=3;
					break;
				}
			}
			if(str[j] > str2[j]){
				score[0] +=3;
				break;
			}
			if(str[j] < str2[j]){
				score[1] +=3;
				break;
			}
		}
	}
	printf("%d %d\n",score[0],score[1]);
	return 0;
}
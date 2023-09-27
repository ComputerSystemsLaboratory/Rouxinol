#include <cstdio>
#include <cstring>

using namespace std;

int main(void){
	char buf[1000][33], word[33];
	int bufnum = 0, same[1000], i, smax, lmax;
	memset(same,0,sizeof(same));
	while(scanf("%s",word) != EOF){
		for(i = 0;i < bufnum;i++){
			if(!strcmp(word,buf[i])){
				same[i]++;
				break;
			}
		}
		if(bufnum == i){
			strcpy(buf[bufnum],word);
			same[bufnum++]++;
		}
	}
	smax = 0, lmax = 0;
	for(i = 0;i < bufnum;i++){
		if(smax < same[i]){
			smax = same[i];
		}
		if(lmax < strlen(buf[i])){
			lmax = strlen(buf[i]);
		}
	}
	for(i = 0;i < bufnum;i++){
		if(smax == same[i])
			printf("%s ",buf[i]);
	}
	int cnt1 = 0, cnt2 = 0;
	for(i = 0;i < bufnum;i++){
		if(lmax == strlen(buf[i]))
			cnt1++;
	}
	for(i = 0;i < bufnum;i++){
		if(lmax == strlen(buf[i])){
			printf("%s",buf[i]);
			cnt2++;
			if(cnt1 != cnt2){
				printf(" ");
			}
		}
	}
	printf("\n");
	return 0;
}
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
	char word[33];
	int len = 0;
	int mlen = 0;
	char mword[33];
	char dict[1000][33];
	int mode[1000];
	int st = 0;
	bool find = false;
	int i = 0;

	while(scanf("%s", word) != EOF){
		len = strlen(word);
		for(i=0; i<len; ++i){
			word[i] = tolower(word[i]);
		}

		if(mlen < len){
			mlen = len;
			strcpy(mword, word);
		}

		find = false;
		for(i=0; i<st; ++i){
			if(strcmp(dict[i], word) == 0){
				find = true;
				break;
			}
		}
		if(find){
			mode[i]++; 
		}else{
			strcpy(dict[st], word);
			mode[st] = 1;
			st++;
		}
	}

	int max = 0;
	int maxi = 0;
	for(i = 0; i<st; ++i){
		if(max < mode[i]){
			max = mode[i];
			maxi = i;
		}
	}
	printf("%s %s\n", dict[maxi], mword);

	getchar();
	return 0;
}
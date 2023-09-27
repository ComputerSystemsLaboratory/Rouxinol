#include <stdio.h>
#include <string.h>

#define MAX 512

int main(void){
	char words[MAX][33];
	int wcnt=0;
	int f[MAX], len[MAX];
	char word[33];
	int longest, mostf;
	
	while (scanf("%s", word)!=EOF){
		int wid=-1;
		for (int i=0; i<wcnt; i++){
			if (strcmp(word, words[i])==0){
				wid = i;
			}
		}
		if (wid==-1){
			strcpy(words[wcnt], word);
			len[wcnt] = strlen(word);
			f[wcnt] = 1;
			wcnt++;
		} else {
			f[wid]++;
		}
	}
	longest = mostf = 0;
	for (int i=0; i<wcnt; i++){
		if (len[longest] < len[i]) longest = i;
		if (f[mostf] < f[i]) mostf = i;
//		printf("%s: %d %d\n", words[i], f[i], len[i]);
	}
	printf("%s %s\n", words[mostf], words[longest]);
	
	return 0;
}
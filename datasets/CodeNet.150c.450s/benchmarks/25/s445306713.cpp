#include <stdio.h>
#include <ctype.h>
#define CHARNUM 26

char c_set[CHARNUM]={'a','b','c','d','e','f','g','h','i','j',
					 'k','l','m','n','o','p','q','r','s','t',
					 'u','v','w','x','y','z'};

int ctoi(char c){
	int i=0;
	while(c!=c_set[i]&&i<CHARNUM){
		i++;
	}
	return i;
}

int main(){
	char c;
	int v[CHARNUM+1]={0};
	while((c=getchar())!=EOF){
		ungetc(c,stdin);
		while(1){
			c = tolower(getchar());
			if(c == '\n')break;
			v[ctoi(c)]++;
		}
	}

	for(int i=0;i<CHARNUM;i++){
		printf("%c : %d\n",c_set[i],v[i]);
	}
}
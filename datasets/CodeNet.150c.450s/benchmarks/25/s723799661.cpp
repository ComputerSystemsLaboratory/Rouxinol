//NAOTO172さん の解読
#include <stdio.h>

int main(){
	int countTable[256] = {0};
	char ch;

	while((ch = getchar()) != EOF){ //getchar 考察
				countTable[ch]++; //aなら97番
	}
	for(int i = 97; i <=122;i++)printf("%c : %d\n",i,countTable[i]+countTable[i-32]);
//i=97 -> a   i=97-32=65 -> A
}


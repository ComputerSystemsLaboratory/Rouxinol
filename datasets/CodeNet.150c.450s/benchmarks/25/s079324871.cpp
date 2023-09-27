#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main() 
{
// your code goes here

int counts[30]={0};

char cs[1201];
while(scanf("%[^\n]\n",cs)!=EOF){
	for(int i=0;cs[i]!='\0';i++){
		if(isalpha(cs[i])){
			counts[tolower(cs[i])-'a']++;
		}
	}
}

for(char c='a';c<='z';c++){
	printf("%c : %d\n",c,counts[c-'a']);
}
return 0;
}
